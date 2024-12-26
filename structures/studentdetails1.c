#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int mani(){
    struct student s1={123,9.2,"ak"};
    printf("student roll=%d\n",s1.roll);
    struct student *ptr=&s1;
    printf("student roll=%d\n",((*ptr).roll));
    return 0;
}
