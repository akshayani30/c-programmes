#include<stdio.h>
int main()
{
    int number;
    printf("enter a number:");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("even");
    }
    else {
        printf("odd\n");
        printf("given number is odd");    }
    return 0;
}