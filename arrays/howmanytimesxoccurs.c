#include<stdio.h>
int main(){
    int arr[100],i,n,x,count=0;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the num to search:");
    scanf("%d",&x);
    for ( i = 0; i <n; i++){
    if(arr[i]==x){
        count++;
    }
    }
    printf("the number of %d occurs %d times in an array:",x,count);
    return 0;
    }