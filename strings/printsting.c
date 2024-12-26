#include<stdio.h>
int printstring(char arr[]);
int main(){
    int i;
    char firstname[]="akshayani";
    char lastname[]="suman";
    printstring(firstname);
    printstring(lastname);
    return 0;
}
int printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
    }
        printf("\n");
    
}
