#include<stdio.h>
void add(int a, int b,int sum);     
void mul(int a, int b,int multi);
void subtract(int a,int b,int sub);
int main(){ 
  int sum=0,prod=0,sub=0;  
           
  int x=5;
  int y=5;
  printf("before calling sum is %d\n",sum);
  add(x,y,sum);
   printf("after calling sum is %d\n",sum);

  mul(x,y,prod);
  subtract(x,y,sub);

return 0;
}
void add(int a, int b,int sum){ //coping values x into a and y into b is known as pass by value. here original values doesnot changes
 sum=a+b;
printf("sum of %d and %d is %d\n",a,b,sum);

}
void mul(int a,int b,int multi){
     multi=a*b;
 printf("mul of %d and %d is %d\n",a,b,multi);
    }
void subtract(int a, int b,int sub){
     sub=a-b;
 printf("sub of %d and %d is %d",a,b,sub);
}