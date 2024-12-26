#include<stdio.h>
int second_highest(int arr[], int length);
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int result=second_highest(arr,10);
    printf("second highest:%d\n",result);
    return 0;

}
int second_highest(int arr[], int length){
    int max1;
    int max2;
      if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
      }
      else{
        max1=arr[1];
        max2=arr[0];
      }
      for(int i=2;i<length;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }

      }
      return max2;
}
