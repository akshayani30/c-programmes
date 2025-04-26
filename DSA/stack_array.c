#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main(){
    top=-1;
    printf("enter the size of stack:");
    scanf("%d",&n);
    printf("\n 1.push\t 2.pop\t 3.display 4.exit");
    while(1){
        printf("\n enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();  // function calling
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
                
            }
            default:
            {
                printf("\n\t please enter a valid choice(1/2/3/4)");
            }
        }
    }
    return 0;
}
void push()
{
    if(top>=n-1){
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf("enter a value to be pushed:");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
    
}
void pop(){
    if(top<=-1)
    {
        printf("\n\t stack is under flow");
    }
    else{
        printf("\n\t the popped ele is %d",stack[top]);
        top=top-1;
    }
}
void display(){
    if(top>=0)
    {
        printf("\n the element in stack \n");
        for(i=top;i>=0;i--)
            printf("\n%d",stack[i]);
        printf("\n press next choice");
    }
    else
    {
        printf("\n the stack is empty");
    }
}