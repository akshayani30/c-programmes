#include<stdio.h>
int main(){
    char *canchange="hello world";
    puts(canchange);
    canchange="hello";
    puts(canchange);
    return 0;
}
