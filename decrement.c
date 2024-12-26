#include<stdio.h>
int main(){
    int i,n=10,sum=0;
    printf("enter the ten numbers:");
    for(int i=10;i>=1;i--)
    printf("%d",i);

    scanf("%d",&n);
    sum=sum+n;
    printf("sum is %d",sum);
    return 0;
}