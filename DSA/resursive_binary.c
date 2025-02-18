#include<stdio.h>
int binarysearch(int arr[],int low,int high,int x )
{
    if(high >= low){
        int mid=(low +high)/2;

    if (arr[mid]==x)
    return mid;

    if(arr[mid]>x)
    return binarysearch(arr,low,mid-1,x);

    return binarysearch(arr,mid+1,high,x);
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,10,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x =10;
    int result=binarysearch(arr,0,n-1,x);
    if(result == -1)
    printf("element is not present in array");
    else
    printf("element is present at index %d",result);
    return 0;
}