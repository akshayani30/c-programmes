#include<stdio.h>
int main(){
    int n1,n2,*ptr1,*ptr2,max;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);

    ptr1= &n1;   //assign pointers to the address of n1 and n2
    ptr2= &n2;

    if ( *ptr1 > *ptr2){      //finding max numbers using ponters
    max= *ptr1;
    }
    else{
        max=*ptr2;
    }
    printf("max num is:%d",max);
    return 0;
    }