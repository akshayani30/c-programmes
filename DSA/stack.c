#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100

typedef struct{
    int arr[MAX_SIZE];  //array to store stack elements
    int top;
}struct_stack;
void initialize(struct_stack *stack){
    stack->top=-1;
}
bool isempty(struct_stack *stack){
    return stack->top==-1;

}
bool isfull(struct_stack *stack){
    return stack->top ==MAX_SIZE-1;
}
void push(struct_stack *stack,int value){
    if (isfull(stack)) {
        printf("stack Overflow\n");
        return;
    }
    stack->arr[++stack->top]=value;
    printf("pushed %d onto the stack\n",value);
}
int pop(struct_stack *stack){
    if (isempty(stack)){
        printf("stack underflow\n");
        return -1;
    }
    int popped = stack->arr[stack->top];
    stack->top--;
    printf("popped %d from the stack\n",popped);
    return popped;
}
int peek(struct_stack *stack){
    if (isempty(stack)){
        printf("stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}
int main() {
    struct_stack stack;
    initialize(&stack);
    push(&stack,5);
    printf("top element:%d\n",peek(&stack));
    push(&stack,10);
    printf("top element:%d\n",peek(&stack));
    push(&stack,15);
    printf("top element:%d\n",peek(&stack));
    push(&stack,20);
    printf("top element:%d\n",peek(&stack));
    while (!isempty(&stack)) {
    printf("top element:%d\n",peek(&stack));
    printf("popped element:%d\n",pop(&stack));
    }
    return 0;
}