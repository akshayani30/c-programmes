#include<stdio.h>
int main(){
    char ak;
    printf ("enter the number or char:");
    scanf("%c",&ak);
    if('9'>=ak>='0'){
        printf("you have entered digit");
    }else{
        printf("given number is not a digit");
    }
}