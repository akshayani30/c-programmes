#include<stdio.h>
int main(){
int i,j,n,fact=0;
printf("enter the number:");
scanf("%d",&n);
 for(i=2;i<=n;i++){
  fact=0;
  for(j=1;j<=i;j++){
  if(i%j==0)
  fact++;
  }
 if(fact==2){
 printf(" %d",i);
 }
}
return 0;
}
