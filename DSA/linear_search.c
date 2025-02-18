#include<stdio.h>
int main()
{
    int a[10],n,key,i,pos=-1;
    printf("enter the value n:");
    scanf("%d",&n);
    printf("enter the value key:");
    scanf("%d",&key);
     printf("enter the %d elemets",n);
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
        if(key==a[i]){
         pos=i;
        break;
     }}
     if(pos==-1){
        printf("%d is not found",key);

     }
     else
     printf("%d is found in %d position",key,pos+1);
     return 0;

    
}