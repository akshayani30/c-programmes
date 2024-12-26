#include<stdio.h>
int main(){
    int arr[100],i,n,element;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to add:");
    scanf("%d",&element);

    arr[n]=element;   //insert the element at end of the array

    printf("the array after insertion:\n");
    for(i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
    }