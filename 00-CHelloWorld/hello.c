#include "hello.h"

#include <stdio.h>
int main() {
    char *nombreArchivo = "output.txt";
    char *modo = "w";// w es para sobrescribir, a+ es para añadir al existente
    FILE *archivo = fopen(nombreArchivo, modo);
    // Si por alguna razón el archivo no fue abierto, salimos inmediatamente
    if (archivo == NULL) {
        printf("Error abriendo archivo %s", nombreArchivo);
        return 1;
    }

    fprintf(archivo, "Hello, World!\n");
    return 0;
}
