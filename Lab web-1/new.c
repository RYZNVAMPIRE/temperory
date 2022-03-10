#include<stdio.h>
# define max 6
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
      
    }
    else if((rear+1)%max==front)
    {
        printf("overflow");
    }
    else{
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else if(front==rear){
        printf("the dequeued element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("the dequeued element is %d",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else{
        printf("the elements are\n");
        while(i<=rear)
        {
            printf("%d",queue[i]);
            i=(i+1)%max;
        }
    }
}
int main()
{
    int choice=1,x;
    while(choice<4 && choice!=0)
    {
        printf("\n 1.insert");
        printf("\n 2.delete");
        printf("\n 3.display");
        printf("\n enter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the element");
            scanf("%d",&x);
            enqueue(x);
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            default:printf("enter valid choice");
            break;
        }

    }return 0;
}