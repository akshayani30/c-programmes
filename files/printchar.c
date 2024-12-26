#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("akshayani.txt","w");
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');

    fclose(fptr);
    return 0;

}