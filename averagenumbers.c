#include<stdio.h>
int main()
{
    // float a,b,c;
    // printf("enter a,b and c values:");
    // scanf("%f%f%f",&a,&b,&c);
    // printf("%f",(a+b+c)/3);
    int a,b,c;

printf("enter a,b and c values:");
     scanf("%d%d%d",&a,&b,&c);
     int sum=a+b+c;
     float average=sum/3.0;
     printf("average num is %.2f",average);



     return 0;
}