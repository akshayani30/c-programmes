#include<stdio.h>
int main(){
    int i,count=0;
    char name[50];
    fgets(name,50,stdin);
    for(int i=0;name[i] !='\0';i++)
    count++;
    printf("legth of name is:%d",count-1);
    return 0;
    

}