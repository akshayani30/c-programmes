#include<stdio.h>
int main(){
    int a,b;
    int choice;
    printf("enter the two values:");
    scanf("%d%d",&a,&b);
    printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("sum of %d and %d is:%d",a,b,a+b);
        break;
        case 2:
        printf("diff btw %d and %d is:%d",a,b,a-b);
        break;
        case 3:
        printf("multiplication of %d and %d is:%d",a,b,a*b);
        break;
        case 4:
        printf("dividing %d and %d is:%d",a,b,a/b);
        break;
        default:
        printf("you have entered wrong choice.");
        return 0;

    }
}