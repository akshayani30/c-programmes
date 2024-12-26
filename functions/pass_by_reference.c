#include<stdio.h>
void add(int *a, int *b,int *sum);
void mul(int *a, int *b);
void sub(int *a,int *b);
int main(){
   int sum=0;int prod=0;int multi=0;
    int a=5;
    int b=5;
  printf("before calling sum is %d\n",sum);
   add(&a,&b,&sum);
  printf("after calling sum is %d\n",sum);

    mul(&a,&b);
    sub(&a,&b);

return 0;
}

void add(int *a, int *b,int *sum){
*sum =*a + *b;
printf("sum of %d and %d is %d\n",*a,*b,*sum);
}
void mul(int *a,int *b){
    int mul=*a * *b;
 printf("mul of %d and %d is %d\n",*a,*b,mul);
 }
void sub(int *a, int *b){
    int sub=*a - *b;
 printf("sub of %d and %d is %d",*a,*b,sub);
}