void insertbeg()
{
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    ptr->data=item;
    ptr->next=head;
    head=ptr;
}
void insertenf()
{
    struct node *ptr,*temp;
    int item;
     ptr=(struct node *)malloc(sizeof(struct node *));
     if(ptr==NULL)
    {
        printf("overflow");
    }
    ptr->data=item;
    if(head==NuLL)
    {
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        temp=head;
        while(tem!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;

    }
    void insertrand()
    {
        int item,loc,i;
        struct node *ptr,*temp;

    }
    ptr=(struct node *)malloc(sizeof(struct node *));
     if(ptr==NULL)
    {
        printf("overflow");
    }
    else{
        printf("enter the value");
        scanf("%d",&item);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp->next=NULL)
            {
                printf("cant insert");
            }
        }
        else{
            ptr->next=temp->next;
            temp->next=ptr
        }
        }
    }



}