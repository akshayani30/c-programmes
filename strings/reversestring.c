#include<stdio.h>
#include<string.h>
int main(){
    char reverse[]="akshayanisuman";
     int len=strlen(reverse);
   for(int i=0;len/2;i++){
    char first=reverse[i];
    char last=reverse[len-i-1];
     reverse[i]=last;
     reverse[len-i-1]=first;
    }
    
    printf("%s",reverse);
    

    return 0;
}