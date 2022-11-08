
	# wildcard es un ls que crea un array de los archivos .c
SRC= $(wildcard *.c)   # Encuentra todos los archivos .c dentro del directorio
OBJFILES= $(SRC:.c=.o) # Los dos puntos es una expresion regular
	# A la izquierda de los dos puntos la variable de entrada y a la derecha reglas de sustitucion  

COMPILER= gcc
PROGRAMNAME= prog.exe  # El nombre del programa que devuelve  

all: $(OBJFILES)
	$(COMPILER) -g $(OBJFILES) -o $(PROGRAMNAME)
%.o: %.c
	$(COMPILER) -g -c $< -o $@
clean:
	rm $(OBJFILES)

# ----- Acerca del arcchivo ---------
# Genera un archivo .exe
# Compila todos los programas .c que han sido modificados y no actualizados
# No coge los .h desactualizados
# all y clean son los metodos de acciones utilizados por make
