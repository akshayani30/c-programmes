#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int max_count=0;
    char ch=str[0];
    //int i,j;
    for(int i=0;str[i]!='\0';i++){
        int current_count=1;
        for(int j=i+1;str[j]!='\0';j++){
            if( str[i]==str[j]){
                current_count++;
            }
        }
       if(max_count<current_count){
        max_count=current_count;
        ch=str[i];
       } 
    
    }
    printf("the max repeated letter is %c and its frequency is :%d",ch,max_count);
    return 0;
}