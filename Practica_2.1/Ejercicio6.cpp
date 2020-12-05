#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main(){
	printf("Longitud maxima de argumentos: %i \n", sysconf(_SC_ARG_MAX));
	printf("Numero maximo de hijos: %i \n", sysconf(_SC_CHILD_MAX));
	printf("Numero maximo de ficheros: %i \n", sysconf(_SC_OPEN_MAX));

  return 0;
}
