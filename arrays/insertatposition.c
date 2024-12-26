#include<stdio.h>
int main(){
    int pos=3,i,ele=0;
   int arr[50]={1,2,3,4,5,6,7,8,9,10};
    int num=10;
//     printf("enter num of elements");
//     scanf("%d",&num);
//     for(i=0;i<num;i++){
//     printf("enter the %d array elements:",i+1);
//     scanf("%d",&arr[i]);
//     }
//     printf("enter the position at which element is inserted:");            //a[0]  a[1] a[2] a[3]  a[4]  a[5]
//     scanf("%d",&pos);                                                       //10   20   0    30    40    50
//    printf("enter the element:");
//     scanf("%d",&ele);
    
    num++;

    for(i=num-1;i>=pos;i--){
    arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    printf("after insertion of element:");
    for(i=0;i<num;i++)
    printf("%d ",arr[i]);
    return 0;
}