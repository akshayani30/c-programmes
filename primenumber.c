#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if (n==0 || n==1){
    printf("not a prime number");
    }
    else if (n==2 || n==3){
    printf("prime number");
    }
    else if(n>=4) {
    for(int i=2; i*i<=n;i++){
     if(n%i==0){
     printf("not a prime num");
     }
    else{
        printf("prime number");
    }
    }
    }
    return 0;
}




