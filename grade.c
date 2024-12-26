#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90)
    {
        printf("grade:A\n");
    }
    else if(marks>=80 && marks<=90)
   { printf("grade:B\n");
   }
   else
   printf("grade:F\n");
   return 0;



}