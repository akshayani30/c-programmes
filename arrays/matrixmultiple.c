#include<stdio.h>
void multiplymatrix(int a[10][10], int b[10][10],int r1,int c1,int r2,int c2)
{
    int c[r1][c2];
    int i,j,k,sum=0;
    printf("resultant matrix is:\n");
    for(int i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            sum=0;
            for(int k=0;k<r2;k++){
                sum=sum+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("multiplication is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r1,c1,r2,c2;
    int a[10][10]={{1,2},{2,1}};
    int b[10][10]={{1,2},{2,3}};    // for mul c1st and r2nd shoud be equal
    if(c1 != r2){
    printf("does not multiply");
    }
    else{
    multiplymatrix(a,b,r1,c1,r2,c2);
    }
    return 0;

}
