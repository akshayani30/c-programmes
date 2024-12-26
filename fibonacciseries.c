#include<stdio.h>
int main(){
    int n,i,t1,t2;
    t1=0;
    t2=1;
    int newterm=t1+t2;
    printf("enter the no of terms:");
    scanf("%d",&n);
    printf("fibonaci series:%d,%d",t1,t2);
    for(i=3;i<=n;++i){
    printf(",%d",newterm);
    if(i==n){
        printf(".");
    }
    t1=t2;
    t2=newterm;
    newterm= t1+t2;
    }
    return 0;
}