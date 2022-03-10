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
        printf("queue is overflow\n");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;

        }
    }
    void dequeue()
    {
        if(front==-1 && rear==-1)
        {
            printf("\n underflow");
        }
        else if(front==rear)
        {
            printf("\n the dequeued element is %d",queue[front]);
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
            printf("\n empty queue");
        }
        else{
            printf("the values are:");
            while(i<=rear)
            {
                printf("%d",queue[i]);
                i=(i+1)%max;
            }
        }
        
    }
    int main()
    {
        int choice,x;
        while(choice<4 && choice!=0)
        {
            printf("\n1.insert element");
            printf("\n 2.delete element");
            printf("\n3.display elements");
            printf("Enter your choice");
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
    

