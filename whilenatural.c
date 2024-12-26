#include<stdio.h>
int natural();
int _natural();   //user defined fun with no argument and no return type
int main(){

//natural();
_natural();
}
int natural(){
    int i=1;
    while(i<11){
    printf("%d ",i);
    i++;
}
}
int _natural(){
    int i=1;
do{
        printf("%d ",i);
        i++;
    } while (i<11);
}