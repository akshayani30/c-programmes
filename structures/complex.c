#include<stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
struct complex num1={5,10};
struct complex *ptr=&num1;
printf("real part is %d\n",ptr->real);
printf("img part is %d\n",ptr->img);
return 0;
}