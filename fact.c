#include<stdio.h>
int facto(int n){
   if (n == 0 || n == 1) 
        return 1; 
    return n * facto(n - 1); 
}
void main(){
    int ans = facto(5);
    printf("%d\n",ans);

}