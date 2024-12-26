#include<stdio.h>
int main(){
    float prices[3];
    printf("enter the three prices:");
    scanf("%f",&prices[0]);
    scanf("%f",&prices[1]);
    scanf("%f",&prices[2]);
    printf("total price 1 =%f\n",prices[0]+(0.18*prices[0]));
    printf("total price 2 =%f\n",prices[1]+(0.18*prices[1]));
    printf("total price 3=%f\n",prices[2]+(0.18*prices[2]));
    return 0;
}