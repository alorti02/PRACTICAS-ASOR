#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(){
    char *s;

    if(setuid(2) == -1){
        perror(s);
    }
    
    else{
        printf("Todo OK.");
    }

    return 1;
}
