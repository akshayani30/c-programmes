#include<stdio.h>
int main(){
    float num1,num2,num3;
    float max,min;

    printf("enter three numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);
    max=num1;
    if(num2>max){
        max=num2;
    }
    if(num3>max){
        max=num3;
    }
    min=num1;
    if(num2<min){
        min=num2;
    }
    if(num3<min){
        min=num3;
    }

    printf("maximum :%.2f\n",max);
    printf("minimum:%.2f\n",min);
    return 0;
}
