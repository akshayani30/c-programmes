#include<stdio.h>
int main(){
    int arr[50]={0,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("the elements in reverse order:\n");
    for(int i=n-1;i>=0;i--){
    printf("%d",arr[i]);
    }
    return 0;
}