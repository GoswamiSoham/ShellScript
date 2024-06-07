//#include<whistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
void main(){
    int fd;
    char b[50];
    fd = open("file.txt",O_RDONLY);
    read(fd,b,10);
    write(1,b,10);
    lseek(fd,10,SEEK_CUR);
    read(fd,b,10);
    write(1,b,10);

}