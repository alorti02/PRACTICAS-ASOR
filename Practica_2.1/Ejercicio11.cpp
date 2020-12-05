#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <pwd.h>
#include <time.h>

int main(){
    time_t tme;
    tme = time(NULL);

    printf("%ld \n", tme);

    return 1;
}
