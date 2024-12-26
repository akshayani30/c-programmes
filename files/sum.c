#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("summ.txt","r");
    int a=2;
    fscanf(ptr,"%d",&a);
    int b=3;
    fscanf(ptr,"%d",&b);

    fclose(ptr);
    ptr=fopen("summ.txt","w");

    fprintf(ptr,"sum is %d",a + b);
    fclose(ptr);
    }