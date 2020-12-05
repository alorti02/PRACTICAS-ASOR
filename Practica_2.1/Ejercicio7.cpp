#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main() {
	char const *pathname = "/home";
	printf("Numero maximo de enlaces: %i \n",pathconf(pathname, _PC_LINK_MAX));
	printf("Tamaño maximo de la ruta: %i \n",pathconf(pathname, _PC_PATH_MAX));
	printf("Tamaño maximo del nombre del fichero: %i \n", pathconf(pathname, _PC_NAME_MAX));

  return 0;
}
