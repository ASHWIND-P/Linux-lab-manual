#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;
    
    pid = fork(); 

    if (pid > 0) {  
        printf("parent here\n");
        printf("who is here\n");
    } 
    else if (pid == 0) {
        printf("child here\n");
        printf("who is here\n");
    } 
    else {  
        printf("Fork failed!\n");
    }
    
    return 0;
}

