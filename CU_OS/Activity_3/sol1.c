#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pidc;
    pid_t pidgc;

    pidc = fork();
    
    if (pidc < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
    } else if (pidc == 0) {
        printf("I am the child process. My PID is %d and my parent's PID is %d\n", getpid(), getppid());

        pidgc = fork();
        
        if (pidc < 0) {
        fprintf(stderr, "Fork failed");
        return 1;
        } else if (pidgc == 0) {
            printf("I am the grandchild process. My PID is %d and my parent's PID is %d\n", getpid(), getppid());
        } else {
            wait(NULL);
        }  
    } else {
        wait(NULL);
        printf("I am the parent process. My PID is %d\n", getpid());
    }
}