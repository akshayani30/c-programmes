#include<stdio.h>

int sum(int a,int b);  //declaration
void main()
{
      int a,b;
   //sum(5,4);   //calling function     sum = called function  main= calling function
   printf("%d",sum(5,4));
}
int sum(int a,int b)                                           //without argument and return type//

{
     //defined function   function definition
   int total = a+b;
   // printf("%d",sum);
   return total;
}