#include<stdio.h>
void storetable(int arr[][10],int n,int m,int number);
int main(){
    int tables[2][10];
    storetable(tables,0,10,2);
    storetable(tables,1,10,3);
   for(int i=0;i<10;i++){             
    printf("%d ",tables[0][i]);     //0,0  0,1 0,2 0,3 ......
}
printf("\n");

   for(int i=0;i<10;i++){ 
    printf("%d ",tables[1][i]);
   }                                //1,0  1,1  1,2 1,3 ....... 
  return 0;
}
void storetable(int arr[][10],int n,int m,int number) {
      for(int i=0;i<m;i++) {   //0 to 10     
      arr[n][i]=number* (i+1);      //n=rows  m=columns
}
}

