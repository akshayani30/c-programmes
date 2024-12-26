#include<stdio.h>
int main()
{
    int n1,n2,i,j,count;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("prime numbers are:");
    for(int i=n1;i<=n2;i++)   
    {
        if(i==0 || i==1){
             continue;  //skip
             }
        count=1;
         for(j=2;j<=i/2;++j){
         if(i%j==0){
            count=0;
            break;
         }
         }
          if(count==1)
          printf("%d ",i); 

        
        }
return 0;

}

// for(i=2;i<=n;i++){
//   fact=0;
//   for(j=1;j<=i;j++);{
//   if(i%j=0)
//   fact++;
//   }
//  if(fact==2
//  printf("%d",i))

// }



