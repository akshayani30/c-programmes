#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("ak.txt","w");
    char name[100];
    int roll;
    float cgpa;
    printf("enter name:");
    scanf("%s",&name);
    printf("enter roll:");
    scanf("%d",&roll);   
    printf("enter cgpa:");
    scanf("%d",&cgpa); 

    fprintf(fptr,"student name %s\n",name);
    fprintf(fptr,"student rollno %d\n",roll);
    fprintf(fptr,"student cgpa %f\n",cgpa);

    fclose(fptr);

}