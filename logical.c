#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x and y values:");
    scanf("%d%d",&x,&y);
    printf("\n(x<10)&&(y>1)= %d", (x<10)&&(y>1));
    printf("\n(x==5)||(y==5)= %d",(x==5)||(y==5));
    printf("\n!(x==y)= %d", !(x==y));
    return 0;

}