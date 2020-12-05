#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

int main(){
   utsname u;
   if(uname(&u) == 0){
        printf("System Name: %s \n", u.sysname);
        printf("Node name: %s \n", u.nodename);
        printf("Release: %s \n", u.release);
        printf("Version: %s \n", u.version);
        printf("Machine: %s \n", u.machine);

   }
   else{
       printf("Ha habido un error: %s", strerror(errno));
   }

    return 1;
}
