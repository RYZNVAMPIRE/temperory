#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void insertend();
void insertrand();
void deletebeg();
void deleteend();
void deleterand();
void display();
struct node
{
    int data;
    struct node* next;
};struct node* head;
void main()
{
    int choice=0;
    do
    {
    printf("Enter the choice:\n1.insert beginning \n 2.insert end\n3.insert random \n4.delete beginning \n5.delete end \n6.delete random \n7.display\n8.exit");
    scanf("%d",&choice);   
    switch(choice)
    {
        case 1: insertbeg();
        break;
        case 2:insertend();
        break;
        case 3:insertrand();
        break;
        case 4:deletebeg();
        break;
        case 5:deleteend();
        break;
        case 6:deleterand();
        break;
        case 7:display();
        break;
        case 8:exit(0);
        break;
        default:printf("please enter a valid choice");
        break;
    }
}while(choice!=8);
}
void insertbeg()
{
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else{
        printf("enter the value");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("value inserted");
    }
}
void insertend()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else{
        printf("enter the value");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("node inserted");
        }
        else{
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("value inserted");
        }
    }
}