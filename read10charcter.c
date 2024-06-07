#include<unistd.h>
#include<fcntl.h>
void main(){
    int fd1,fd2;
    char b[50];
    fd1 = open("source.txt",O_RDONLY);
    read(fd1,b,20);
    fd2 = open("destination.txt",O_WRONLY);
    write(fd2,b,10);
}