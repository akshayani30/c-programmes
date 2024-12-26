#include<stdio.h>
#include<string.h>
int main(){
char alphabets[]="abcdefghijklmnopqrstuvwxyz";
int len= strlen(alphabets);
char *ptr=alphabets;
for(int i=0;i<len;i++)
 printf("%c",*(ptr+i));
return 0;
}