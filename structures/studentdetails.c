#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student e1;
    e1.roll=123;
    e1.cgpa=9.5;
    strcpy(e1.name,"ak");
    printf("student name:%s\n",e1.name);
    printf("student roll:%d\n",e1.roll);
    printf("student cgpa:%f\n",e1.cgpa);
    return 0;
}