#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("test2.txt","r");
    if(fptr==NULL){
        printf("file doesnt exist");
    }else{
        fclose(fptr);
    }

    return 0;
}