#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three values:");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b) && (a>c))
    printf("greater num is %d",a);
    else if((b>a) && (b>c))
    printf("greater num is %d",b);
    else
    printf("greater num is %d",c);
    return 0;
}