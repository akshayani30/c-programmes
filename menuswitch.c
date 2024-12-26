#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
double balance = 20000, amount = 0;
int choice = 0;



    printf(" 1) deposit\n");
    printf(" 2) withdraw\n");
    printf(" 3) print balance\n");
    printf(" 4) print balance and quit\n");
    printf(" 5) quit\n");
    printf("enter the choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    printf("enter the amount:");
    scanf("%d",&amount);
    balance += amount;  //balance=balance+amount;
    printf("deposit succesfull your current balance is:%d",balance);
    break;

    case 2:
    printf("enter the amount:");
    scanf("%f",&amount);
    balance -= amount;
    printf("current balance :%d",balance);
    break;

    case 3:
    printf("%.2f\n", balance);

    break;
          
    case 4:
    printf("%.2f\n", balance);

    case 5:
    exit(0);

    default:
    printf("you have entered the wrong case");

    }

}

