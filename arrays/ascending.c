#include<stdio.h>
int main() {

        int arr[]={5,0,1,4,3,2};
        // int arr[]={0,5,1,4,3,2};
        // int arr[]={0,1,5,4,3,2};
        // int arr[]={0,1,4,5,3,2};
        // int arr[]={0,1,3,5,4,2};
        // int arr[]={0,1,2,5,4,3};
        // int arr[]={0,1,2,4,5,3};
        // int arr[]={0,1,2,3,5,4};
        // int arr[]={0,1,2,3,4,5};



    int n=sizeof(arr)/sizeof(arr[0]);
    
   
    for (int i = 0; i<n; i++) {
        for (int j = i+1;j<n; j++) {
            if (arr[j] <arr[i]) {
                
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order: \n");
    for (int i = 0;i<n; i++) {
        printf("%d  ", arr[i]);
    }

    return 0;
}