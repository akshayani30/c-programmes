#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char ak[100];
    fgets(ak,100,stdin);
    for(int i=0;ak[i]!='\0';i++)
    {
       if(ak[i]>='a' && ak[i]<='z')
       {
        ak[i]=ak[i]-32;
       }
       else if(ak[i]>='A' && ak[i]<='Z'){
        ak[i]=ak[i]+32;
               }
       
            
    }
    puts(ak);
    return 0;
}