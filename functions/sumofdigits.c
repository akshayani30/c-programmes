#include<stdio.h>
int sum_of_digits(int num)
{
    int sum=0;
    int on=num;
    while(num>0){              //
    int rem=num%10;  
    sum=sum+rem;                //sum+=rem;
    num=num/10;     //num/=10
}
   // printf("sum of digits of %d is %d",on,sum);
return sum;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    printf("%d",sum_of_digits(n));
    //int result= sum_of_digits(n);
    //printf("sum of digits of %d is %d\n",n,result);
    return 0;
}