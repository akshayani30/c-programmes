#include<stdio.h>
int main(){
    int a=22;
    int *ptr=&a;
    printf("pointer=%u\n",ptr);       //example pointer=2000
    ptr++;                       // if we are doing inc it will add four because init  bytes... ptr++ means ptr+1
    printf("pointer=%u\n",ptr);       // after inc pointer =2004
   return 0;
}