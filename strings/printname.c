#include<stdio.h>
int main(){
    char name[50];           
    scanf("%s",name);                 //here enter the name        //here no need to keep '&' in string
    printf("your name is %s",name);            //your name is suman
    return 0;
}