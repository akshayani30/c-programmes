#include<stdio.h>
int vowelcount(char str[]);
int main(){
    char str[]="akshayani";
   printf("vowels are %d", vowelcount(str));
   return 0;
}
int vowelcount(char str[]){
int count=0;
for(int i=0;str[i]!='\0';i++)
if(str[i]=='a' ||  str[i]=='e'  ||  str[i]=='i' || str[i]==0  ||  str[i]=='u' ){
count++;
}
return count;

}