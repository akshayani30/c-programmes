#include<stdio.h>
int main(){
    int n;
    int t1=0,t2=1;   //first two terms
    int nextterm=t1+t2;   // third term
   // printf("fibonacci series:%d,%d",t1,t2);
    printf("enter the no of terms:");
    scanf("%d",&n);
    printf("fibonacci series:%d,%d",t1,t2);
    int i=3;
    while( i<=n){
        printf(",%d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        i++;
    }
    return 0;


}