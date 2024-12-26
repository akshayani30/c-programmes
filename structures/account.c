#include<stdio.h>
typedef struct bankaccount{
    int bankaccount;
    char name[100];

}acc;
int main(){
    acc acc1={123,"akshayani"};
    acc acc2={124,"suman"};
    printf("acc no =%d\n",acc1.bankaccount);
    printf("name is %s",acc1.name);
    return 0;
}