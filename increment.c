#include<stdio.h>
int main() 
{
    int a,b;
    printf("enter a an b values:");
    scanf("%d%d",&a,&b);
    printf("\n a value before pre inc= %d",a);
    printf("\n pre inc value of a ++a= %d",++a);
    printf("\n a value after pre inc= %d",a);
    printf("\n b value before post inc= %d",b);
    printf("\n post inc value of b b++= %d",b++);
    printf("\n b value after post inc= %d",b);
    return 0;
}
