#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(){
    if(setuid(2) == -1){
        printf("Vaya, ha habido un error: %d. \n", errno);
    }
    
    else{
        printf("Todo OK.");
    }

    return 1;
}
