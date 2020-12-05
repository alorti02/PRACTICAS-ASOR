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
    setlocale(LC_ALL, "es_ES");
    time_t tme = time(NULL);
    struct tm *tmS = localtime(&tme);
    char b[100];

    strftime(b, 100, "%A, %d de %B de %Y, %H:%M", tmS);
    
    printf("%s \n", b);

    return 1;
  }
