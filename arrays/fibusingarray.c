#include<stdio.h>
int main(){
    int n,i;
    printf("enter the no of terms:");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;

    printf("fibonacci series:");
    printf("%d%d",fib[0],fib[1]);
    for(i=2;i<n;i++){

    fib[i]=fib[i-1]+fib[i-2];

    printf("%d",fib[i]);
    }
    return 0;
}