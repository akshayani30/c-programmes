#include<stdio.h>
int main(){
    int i, largest;
    int  arr[]={3,5,7,1,2,4,6,8};
    //scanf("%d",&n);
    //printf("enter the elements:");
    int n= sizeof(arr)/sizeof(arr[0]);

    largest=arr[0];  //initialize largest num efual to first element

    for(i=1;i<n;i++){
    if(arr[i] > largest){
        largest=arr[i];
    } 
    }
    printf("largest num in arry is %d\n",largest);
    return 0;
}