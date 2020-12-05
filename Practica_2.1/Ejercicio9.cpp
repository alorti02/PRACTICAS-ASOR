#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main(){
    uid_t uid = getuid();

    printf("UID Real: %d \n", getuid());
    printf("UID Efectivo: %d \n", geteuid());

    return 1;
}
