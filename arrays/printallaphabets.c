#include<stdio.h>
int main(){
    char *ptr="abcdefghijklmnopqrstuvwxyz";
    while(*ptr !='\0'){
    printf("%c ",*ptr);
    ptr++;
}
return 0;
}