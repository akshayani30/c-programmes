#include<stdio.h>
int main(){
    int b[4]; //1d array    //delaration
    int b[]={1,2,3,4};     //1d array initialization
    printf("value is %d\n",b[3]);

    int d[2][3];     //2d array declaration
    int d[2][3]={ {1,2,3},{4,5,6}};
    printf("value is %d",d[1][2]);

    int f[3][3][3];    //3d array declaration
    int f[2][3][3]={{{1,2,2},{1,2,3},{1,2,3}},
                   {{3,4,3},{1,2,3},{1,4,3}}};
     
    
}