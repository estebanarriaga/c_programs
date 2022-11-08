#include "tablero.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "objetos.h"
#include "misil.h"
#include "personaje.h"
#include "enemigo.h"

void iniciaTablero(objeto_t** tablero, int numFilas, int numColumnas){

//iniciar el random
    srand(getpid());
//inicializar el tablero con objetos "no activos"
    for (int i=0;i<numFilas;i++)
    for (int j=0;j<numColumnas;j++)
    {
        
        tablero[i][j].activo=0;
    }

    //numero de enemigos entre 1 y 3
    int numEnemigos=(rand()%3)+1;
    //numero de misiles entre 2 y 5
    int numMisiles=(rand()%4)+2;

    //aniadir Enemigos
    
    for(int i=0;i<numEnemigos;i++)
    {
        objeto_t enemig=CrearObjeto(enemigo);
        //la posición está en la mitad superior del tablero (Y<=(numFilas/2))
        enemig.posY=rand()%(numFilas/2);
        enemig.posX=rand()%numColumnas;
        //añadirlo
        tablero[enemig.posY][enemig.posX]=enemig;
    }


    for(int i=0;i<numMisiles;i++)
    {
        objeto_t mis=CrearObjeto(misil);
        //cualquier posición del tablero
        mis.posY=rand()%(numFilas);
        mis.posX=rand()%numColumnas;
        tablero[mis.posY][mis.posX]=mis;
    }
    
    
    //el  personaje principal está en la fila más inferior del tablero
    objeto_t perso=CrearObjeto(personaje);
    perso.posY=numFilas-1;
    perso.posX=rand()%numColumnas;
    tablero[perso.posY][perso.posX]=perso;
    
}

void iniciaTableroConDatos(objeto_t** tablero, int numFilas, int numColumnas, int numObjetos, char** datos){

//inicializar el tablero con objetos "no activos"
    for (int i=0;i<numFilas;i++)
    for (int j=0;j<numColumnas;j++)
    {
        
        tablero[i][j].activo=0;
    }
    
    //por cada número de objetos del array datos
    for(int i=0;i<numObjetos;i++){
        //iniciar un objeto con datos
        objeto_t obj=CrearObjetoConDatos(datos[i]);
        //colocarlo en la posición correcta del tablero
            //antes de colocarlo, comprobar si las posiciones están dentro del tablero
            if((obj.posY>=0&&obj.posY<numFilas)&&
               (obj.posX>=0&&obj.posX<numColumnas))
            {
                tablero[obj.posY][obj.posX]=obj;
            }else     //si no están, se avisa al usuario
                printf("Error, el objeto %s no está en posiciones válidas\n",datos[i]) ;
    }
}


void dibujaTablero(objeto_t** tablero, int numFilas, int numColumnas){

    printf("\n");
    for(int i=0;i<numFilas;i++){
        for(int j=0;j<numColumnas;j++)
        {
        
            if(tablero[i][j].activo)
            {
                printf("%c",tablero[i][j].sprite);
            }else
            {    printf(" ");
            
            }
        
        }
        printf("\n");
    }
}


//La siguiente función deberá reservar un array doble de objetos, de tamaño “numFilas” x ”numColumnas” 

 
objeto_t** reservaTablero(int numFilas, int numColumnas){ 

       //declarar un puntero doble de objeto_t llamado tablero 
    objeto_t** tablero=NULL;
    
       //iniciar la primera dimensión del puntero doble “tablero” con un array de numFilas de  
       //punteros a objeto_t 
    //printf("Reserva de %d filas\n",numFilas);
    tablero=(objeto_t**)malloc(sizeof(objeto_t*)*numFilas);
 
     //por cada fila del tablero 
     for(int i=0;i<numFilas;i++)
     {
            //inicializar esa fila del tablero con un array de objeto_t de tamaño “numColumnas
      //      printf("Reserva de %d columnas\n",numColumnas);
           tablero[i]=(objeto_t*)malloc(sizeof(objeto_t)*numColumnas); 
      }
     

      //devolver el array doble tablero 
      return tablero;

 } 
 
 
 void actualizaTablero(objeto_t** tablero, int numFilas, int numColumnas) 

{ 

    //por cada posición del tablero 
    for(int y=0;y<numFilas;y++)
        for(int x=0;x<numColumnas;x++)
        {
    //si es un objeto activo 
            if(tablero[y][x].activo)
            //obtener el tipo del objeto 
            {
            
            //llamar a su función de movimiento 

                //mueveEnemigo, mueveMisil o muevePersonaje 
                switch(tablero[y][x].tipo)
                {
                    case enemigo:
                        mueveEnemigo(&tablero[y][x], numFilas, numColumnas);
                    break;
                    case misil:
                        mueveMisil(&tablero[y][x], numFilas, numColumnas);
                    break;
                    case personaje:
                        muevePersonaje(&tablero[y][x], numFilas, numColumnas);
                    break;
                }
             }
         }

    //Después de haber movido todos los objetos, actualizar sus posiciones dentro del tablero 

    //por cada objeto activo del tablero (recorrerlo con un for doble) 

        for(int y=0;y<numFilas;y++)
            for(int x=0;x<numColumnas;x++)
            {

                if(tablero[y][x].activo)
                {

                    //obtener su posición X,Y almacenada en el objeto
                    int newPosX=tablero[y][x].posX;
                    int newPosY=tablero[y][x].posY;
                    //comprobar si debe moverse (las nuevas posiciones son distintas de la posición
                    //actual)
                    int debeMoverse=(y!=newPosY)||(x!=newPosX);

                    //Si se mueve
                    if(debeMoverse)
                        //Comprobar si en esa nueva posición ya hay un objeto activo
                    {
                        if(tablero[newPosY][newPosX].activo){
                            //Si es así, significa que hay una colisión, se resolverán de la siguiente manera
                            if(((tablero[newPosY][newPosX].tipo==enemigo)&&(tablero[y][x].tipo==misil))
                                    ||      //Si colisiona un Misil con un Enemigo, se desactivan ambos

                                    (tablero[newPosY][newPosX].tipo==misil)&&(tablero[y][x].tipo==enemigo)
                                    ||//Si colisiona un Misil con el Personaje, se desactivan ambos
                                    (tablero[newPosY][newPosX].tipo==misil)&&(tablero[y][x].tipo==personaje)
                                    ||
                                    (tablero[newPosY][newPosX].tipo==personaje)&&(tablero[y][x].tipo==misil)
                                    )
                            {
                                tablero[newPosY][newPosX].activo=0;
                                tablero[y][x].activo=0;
                            }
                        }else{

                            //En otro caso, se mueve el objeto a la nueva posición
                            //se copia el objeto a la posición X Y del tablero indicada por sus variables de
                            // posición
                            tablero[newPosY][newPosX]=tablero[y][x];

                            //se desactiva el objeto que estaba en la posición original (variable
                            //activo del objeto accedido con los contadores del “for” a 0)
                            tablero[y][x].activo=0;
                        }
                    }
                }
            }
} 


//Función que indica si hay un personaje activo dentro del tablero: 

    //retorna 1 si hay un personaje activo 

    //0 en otro caso 

int  buscaPersonaje(objeto_t** tablero, int numFilas, int numColumnas)  

{ 

    //var encontrado=0 
    int encontrado=0;
    //por cada objeto del tablero 

        //si está activo y es un personaje 
        for(int y=0;y<numFilas;y++)
            for(int x=0;x<numColumnas;x++)
            {
                
                if(tablero[y][x].activo && tablero[y][x].tipo==personaje)
                {

            //encontrado=1 
                    encontrado=1;
                }
            }

    //retornar encontrado        
    return encontrado; 

} 

