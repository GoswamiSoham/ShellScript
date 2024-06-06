#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
    char b[30];
    read(0,b,10);
    write(1,b,10);
  
}