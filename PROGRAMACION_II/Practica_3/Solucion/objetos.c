
#include "objetos.h"
#include "misil.h"
#include "personaje.h"
#include "enemigo.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////
//Función para crear un objeto de un tipo dado. Inicializa sus valores "tipo",
//"sprite", "activo" y "posición" dependiendo del tipo indicado.

objeto_t CrearObjeto(tipoObjeto_e tipo){

    objeto_t objeto;
    objeto.posX=objeto.posY=0;
    objeto.tipo=tipo;
    objeto.activo=1;
    switch(tipo)
    {
        case personaje:
            objeto.personaje=CrearPersonajePrincipal();
            objeto.sprite='A';
            break;
        case misil:
            objeto.misil=CrearMisil();
            objeto.sprite='.';
            break;
        case enemigo:
            objeto.enemigo=CrearEnemigo();
            objeto.sprite='V';
            break;
        default:
        break;
    };
    return objeto;

}



direccion_e dameDireccion(char* strDir)
{
    //comparar con tipos "ascendente","descendente"
    //devolver el tipo asociado
    char* strTipos[]={"ascendente","descendente"};
    direccion_e tipos[]={ascendente,descendente};
    //si no es ninguno, devolver "2" (error)
    direccion_e tipo=2;
    for(int i=0;i<3;i++)
    {
        if(strcmp(strTipos[i],strDir)==0)
            tipo=tipos[i];
    }
    return tipo;
}


tipoObjeto_e dameTipo(char* strTipo)
{
    //comparar con tipos "misil","enemigo","personaje"
    //devolver el tipo asociado
    char* strTipos[]={"misil","enemigo","personaje"};
    tipoObjeto_e tipos[]={misil,enemigo,personaje};
    //si no es ninguno, devolver "4" (error)
    tipoObjeto_e tipo=4;
    for(int i=0;i<3;i++)
    {
        if(strcmp(strTipos[i],strTipo)==0)
            tipo=tipos[i];
    }
    return tipo;
}


//objeto[posX=5,posY=7,sprite=.,tipo=misil,direccion=ascendente,danio=10]
//objeto[posX=5,posY=7,sprite=A,tipo=personaje,vida=5,puntuacion=0]
//objeto[posX=5,posY=7,sprite=V,tipo=enemigo,vida=100,puntuacion=10,movimientos=x=0,y=1,x=1,y=0,x=-1,y=0,x=0x,y=-1]

objeto_t CrearObjetoConDatos(char* cadena){

    objeto_t objeto;
    //Declaración de variables para cada tipo de dato
    int posX=0;
    int posY=0;
    char sprite='\0';
    tipoObjeto_e tipo;
    
    int vida=0;
    int puntuacion=0;
    movimiento_t movimientos[4];    
    
    int danio=0;
    direccion_e direccion;
    
    objeto.posX=objeto.posY=0;
    objeto.tipo=tipo;
    objeto.activo=1;
    
    char* linea=NULL;
    char* token=NULL;
    char* valor=NULL;
    int cadenaLen=0;
    
    //Reserva de copia de cadena de entrada
    cadenaLen=strlen(cadena);
    linea=(char*)malloc((cadenaLen+1)*sizeof(char));
    //copiar cadena, para poder usar strtok
    strcpy(linea,cadena);
    //la cadena debe empezar por la palabra "objeto" y acabar por "]". Si no, es un error
    token=strtok(linea,"[");
    if(strcmp(token,"objeto")!=0)
    {
        printf("error, objeto %s no válido\n",cadena);
    }else{
        //consumir final de objeto "]" (sustituir por '\0') y actualizar en tamaño (longitud -1)
        linea[cadenaLen-1]='\0';
        cadenaLen--;
        printf("%s",linea);
        //iterar iniciando cada una de las variables posibles. Se acaba cuando "token" o "valor" son null
        do{
            //leer el token (posX, posY, vida,puntuación,tipo,direccion,danio,sprite,movimientos)
            token=strtok(NULL,"=");
            printf("token:%s ",token);
            
            //si token no es NULL
            if(token!=NULL){
                //si no es un movimiento
                if(strcmp("movimientos",token)!=0){
                    //leer valor dado
                    valor=strtok(NULL,",");
                    printf("valor:%s\n",valor);
                        
                    //inicializar la variable adecuada en función del token leído
                    if(strcmp("posX",token)==0)posX=strtol(valor,NULL,10);
                    else if(strcmp("posY",token)==0)posY=strtol(valor,NULL,10);
                    else if(strcmp("vida",token)==0)vida=strtol(valor,NULL,10);
                    else if(strcmp("puntuacion",token)==0)puntuacion=strtol(valor,NULL,10);
                    else if(strcmp("danio",token)==0)danio=strtol(valor,NULL,10);
                    else if(strcmp("tipo",token)==0)tipo=dameTipo(valor);
                    else if(strcmp("direccion",token)==0)direccion=dameDireccion(valor);
                    else if(strcmp("sprite",token)==0)sprite=valor[0];
                }else //los movimientos son especiales
                {
                        printf("\n");
                        //leer los cuatro movimientos
                        for(int i=0;i<4;i++)
                        {
                            //leer el token x
                            token=strtok(NULL,"=");
                            valor=strtok(NULL,",");
                            printf("token:%s ",token);
                            printf("valor:%s \n",valor);
            
                            //iniciar valor
                            movimientos[i].x=strtol(valor,NULL,10);
                            //leer el token y
                            token=strtok(NULL,"=");
                            valor=strtok(NULL,",");
                            printf("token:%s ",token);
                            printf("valor:%s \n",valor);
            
                            //iniciar valor
                            movimientos[i].y=strtol(valor,NULL,10);
                            
                            printf("%d %d\n",movimientos[i].x,movimientos[i].y);
                        }
                }
            }
            
            
        }while(token!=NULL&& valor!=NULL);
    
    }
    
    
    //iniciar posición, tipo, sprite, de objeto
    objeto.posX=posX;
    objeto.posY=posY;
    objeto.tipo=tipo;
    objeto.activo=1;
    objeto.sprite=sprite;
    //en función del tipo del objeto, crear un objeto con sus datos de personaje,misil ó enemigo
    switch(tipo)
    {
        case personaje:
            //crear personaje con datos
            objeto.personaje=CrearPersonajePrincipalConDatos(vida,puntuacion);
            break;
        case misil:
            //crear misil con datos
            objeto.misil=CrearMisilConDatos(danio,direccion);
            break;
        case enemigo:
            //crear enemigo con datos
            objeto.enemigo=CrearEnemigoConDatos(vida,puntuacion,movimientos);
            break;
        default:
        break;
    };
    
    //liberar datos
    free(linea);
    //Devolver el objeto
    return objeto;

}
