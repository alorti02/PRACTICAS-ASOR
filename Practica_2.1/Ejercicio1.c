#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(){
    if(setuid(2) == -1){
        perror("Vaya, ha habido un error. \n");
    }
    
    else{
        printf("Todo OK.");
    }

    return 1;
}
