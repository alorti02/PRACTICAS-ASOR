#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <pwd.h>
#include <time.h>
#include <sys/time.h>

int main(){
    timeval inicio, fin, resta;

    gettimeofday(&inicio, NULL);
    
    for(int i = 0; i < 1000000; i++){}
    
    gettimeofday(&fin, NULL);

    resta.tv_usec = fin.tv_usec - inicio.tv_usec;
    
    printf("Tiempo del bucle: %ld \n", resta.tv_usec);

    return 1;
  }
