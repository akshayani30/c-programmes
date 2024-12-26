#include<stdio.h>
void checkchar(char str[],char ch);
int main(){
    char str[]="suman";
    char ch='x';
    checkchar(str,ch);
}
void checkchar(char str[],char ch){
for(int i=0;str[i]!='\0';i++)
if(str[i]==ch){
    printf("character is present in string");
}
else
printf("character is not present in string");
}