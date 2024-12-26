#include<stdio.h>
void printtable(int n);  //parameter
int main(){
    int n;
  printf("enter the number:");
  scanf("%d",&n);
  

  printtable(n);   //argument/actual parameter  //if we want to print the table in (main function) then we need to write (return function)
  return 0;

}
void printtable(int n){
for(int i=0;i<=10;i++){
    printf("%d\n",i*n);   
}
}

