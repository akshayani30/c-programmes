#include<stdio.h>
void printnumber(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    return 0;

}
void printnumber(int arr[],int n){
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
printf("\n");
}