#include<stdio.h>
void replacement(int arr[],int size){
    for (int i=0;i<size;i++){
    if(arr[i]==0){
        arr[i]=1;
    }
}}
int main(){
    int arr[]={0,1,2,0,5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
printf("\n");
printf("original array:");
for (int i=0;i<size;i++){
    printf("%d",arr[i]);
}
printf("\n");
replacement(arr,size);
printf("modified array: ");
for (int i=0;i<size;i++){
    printf("%d",arr[i]);
}
return 0;
}