#include<stdio.h>
void main(){
    int r,j,a;
    printf("enter the percentage of r,j,a:");
    scanf("%d%d%d",&r,&j,&a);
    if((r>j) && (r>a)){
     printf(" rishi is highest score");
    }
    else if((a>j) && (a>r)){
        printf("ahmed is highest score");}

    else
    printf("john is highest score");
    
}