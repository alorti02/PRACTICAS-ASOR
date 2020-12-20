#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <pwd.h>
#include <time.h>
#include <sys/time.h>
#include <locale.h>

int main(){
	const char P[]="/home/alex/Documentos/Ejercicios ASOR";
	int fd = open(P, O_CREAT, 0645);
	printf("Desc = %i\n", df);

	return 0;
  }
