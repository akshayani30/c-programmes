#include<stdio.h>
#include<math.h>
int main()
   {
    int n,rem,arm=0;              //153=1*1*1+5*5*5+3*3*3
    printf("enter a three digit number:");
    scanf("%d",&n);
    int initial= n;
    while (n>0){   //150>0, the  15>0 then 1>0.
    rem=n%10;  //3 then 5 then 1
    arm=(rem*rem*rem)+arm;   //no of digits equal to no of remainders multiple
    n=n/10; 
    }
    if(initial==arm){
    printf("armstrong number");
    }
    else{
    printf("not a armstrong number");
    }
    return 0;
    
    

    }