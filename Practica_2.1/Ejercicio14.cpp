#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <pwd.h>
#include <time.h>
#include <sys/time.h>

int main(){
    time_t tme = time(NULL);
    struct tm *tmS = localtime(&tme);

    printf("Estamos en el año %d. \n", tmS->tm_year + 1900);

    return 1;
  }
