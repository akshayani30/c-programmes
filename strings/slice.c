#include<stdio.h>
void slice(char str[],int n, int m);
int main(){
    char str[]="helloworld";
    slice(str,3,6);
}
void slice(char str[],int n,int m){
   char newstr[100];
   int j=0;
   for(int i=n;i<=m;i++){
   newstr[j]=str[i];
   j++;
   }
   newstr[j]='\0';
   puts(newstr);

}