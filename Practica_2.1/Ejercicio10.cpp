#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <pwd.h>

int main(){
    uid_t uid = getuid();

    printf("UID Real: %d \n", getuid());
    printf("UID Efectivo: %d \n", geteuid());

    struct passwd *pass = getpwuid(uid);

    char *name = pass->pw_name;
    
    char *dir = pass->pw_dir;
    
    char *info = pass->pw_gecos;

    printf("Nombre de usuario: %s \n", name);
    
    printf("Directorio HOME: %s \n", dir);
    
    printf("Descripcion de usuario: %s \n", info);

    return 1;
}
