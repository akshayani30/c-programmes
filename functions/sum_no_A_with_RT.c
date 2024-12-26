#include<stdio.h>
int sum(void);
void main()
{
    int s;
   s= sum();
   printf("sum =%d",s);
}
int sum()
{
    int a=5,b=9,sum=0;
    sum = a+b;
    printf("%d",sum);
    return(sum);     
}