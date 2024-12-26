#include<stdio.h>
int main(){
    int marks[2][3];  //2x3    2students  3submarks

    marks[0][0]=90;
    marks[0][1]=80;
    marks[0][2]=70;

    marks[1][0]=50;
    marks[1][1]=60;
    marks[1][2]=70;

    printf("%d",marks[0][0]);
    return 0;
}