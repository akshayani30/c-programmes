#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void del();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main(){
    int choice;
        printf("1.insert the element to queue\n");
        printf("2.delete element from queue\n");
        printf("3.display all elments of queue\n");
        printf("4.quit\n");
    while(1)
    {
        
        printf("enter your choice:");
        scanf("%d",&choice);
        
        switch(choice)
            {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("wrong choice\n");
        }
    }
    return 0;
}    
void insert()
{
    int element;
    if (rear==MAX-1)
    printf("queue overflow");
    else{
    if(front ==-1){
        front=0;
    }
    printf("insert the element in queue:");
    scanf("%d",&element);
    rear=rear+1;
    queue_array[rear]=element;

    }
}     
void del(){
     if (front==-1 || front > rear)
     {
        printf("queue underflow\n");
        return;
     }
     else{
     printf("element deleted from queue is:%d\n",queue_array[front]);
     front=front+1;
} 
}
void display(){
    int i;
    if(front==-1){
    printf("queue is empty\n");
    }
    for(i=front;i<=rear;i++){
        printf("%d\n",queue_array[i]);
    }

}

