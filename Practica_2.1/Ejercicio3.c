#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

//Se podria cortar en el 133, porque no hay mas errores, pero lo dejo asi como lo pide el enunciado

int main(){
    for(int i = 0; i < 255; i++){
        printf("Error numero %d: %s \n", i, strerror(i));
    }

    return 1;
}
