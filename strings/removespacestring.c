#include<stdio.h>
#include<string.h>
int main(){
    char ak[100];
    int i,j;
    printf("enter the string with space:");
    gets(ak);
    for(i=0;i<strlen(ak);i++){
        if(ak[i]==' '){
            for(j=i;j<strlen(ak);j++){
                ak[j]=ak[j+1];
            }
        }
    }
    printf("updated string:%s",ak);
    return 0;
    
}