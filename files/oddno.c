#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("odd.txt","w");
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i % 2!=0){
        fprintf(fptr,"%d ",i);
        }
    }
    fclose(fptr);

}