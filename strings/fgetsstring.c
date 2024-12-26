#include<stdio.h>
int main(){
    char str[100];
    printf("enter a line of text:\n");
    fgets(str,100,stdin);
    printf("you have entered: %s",str);
    return 0;
}