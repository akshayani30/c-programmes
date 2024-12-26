#include<stdio.h>
int main(){
    int reverse[]={1,2,3,4,5,6,7};
        int n=sizeof(reverse)/sizeof(reverse[0]);
        int first;int last;
        printf("before ");
       for(int i=0;i<n;i++){
    printf("%d",reverse[i]);
    }       
    printf("\n ");
    for(int i=0;i<n/2;i++){
         first=reverse[i];
         last=reverse[n-i-1];
        reverse[i]=last;
        reverse[n-i-1]=first;
    }
    printf("after: ");
     for(int i=0;i<n;i++){
    printf("%d",reverse[i]);
    }
    
    return 0;
}