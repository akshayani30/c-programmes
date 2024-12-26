#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("akshayani.txt","r");
    char str[100];
    fscanf(fptr,"%s",str);
    fclose(fptr);
    printf("string from the file :%s\n",str);
    
}