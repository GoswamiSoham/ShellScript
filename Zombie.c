#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main(){
    pid_t p;

    p = fork();
    //printf("Value of p is:%d\n",p);
    if(p==0){
        sleep(2);
        //child created
        printf("Child created with pid %d\n",getpid());
        printf("Parent process with pid %d\n",getppid());
    } else{
        //child not created
        //put parent in sleep
        //sleep(2);
        printf("Parent process with pid %d\n",getppid());
        printf("Child process with pid %d\n",getpid());
    }
}