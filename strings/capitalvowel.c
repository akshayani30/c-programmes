#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char su[]="suman";
    for(int i=0;su[i]!=0;i++){
        if(su[i]=='a' ||  su[i]=='e' ||  su[i]=='i'||  su[i]=='o' || su[i]=='u'){
          su[i]= su[i]-'a'+'A';
        }
    }
    puts(su);
    return 0;
}