#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i;
printf("enter number 1");
scanf("%d",&n1);
printf("enter number 2");
scanf("%d",&n2);
for(i=1;i<=2;i++);
{
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d%d",n1,n2);
}
}