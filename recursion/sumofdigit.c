#include<stdio.h>
int sumofdigits(int n,int sum);
int main(){
    int n,sum=0;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("sum of the number is :%d",sumofdigits(n,sum));
    return 0;
}
int sumofdigits(int n,int sum){
if(n==0)
return sum;

sum=sum+n%10;
return sumofdigits(n/10,sum);
}