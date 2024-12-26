#include<stdio.h>
int main()
{
  float a,b;
  printf("enter a and b values:");
  scanf("%f%f",&a,&b);
  b>a ? printf("b is big") : printf(" a is big");
  return 0;
}