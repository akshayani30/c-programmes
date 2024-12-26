#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1);
int main(){
struct student s1={121,9.5,"akshayani"};
printinfo(s1);
return 0;
}
void printinfo(struct student s1){
    printf("STUDENT INFORMATION\n");
    printf("student.roll=%d\n",s1.roll);
    printf("student.cgpa=%f\n",s1.cgpa);
    printf("student.name=%s\n",s1.name);
}