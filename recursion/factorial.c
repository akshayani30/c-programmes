#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("factorial of the n is :%d",fact(n));
    return 0;
}
int fact(int n){
    if(n==1)
    return 1;
    
    else
    return fact(n-1)*n;

}

    