



#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create(struct node **h)
{   
    int i;
    struct node *cur;
    struct node *ptr;
    printf("\n Enter 5 values of linked list: ");
    for(i=0;i<5;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&cur->data);
        cur->next=NULL;

    if((*h)==NULL)
    {
        *h=cur;
        ptr=cur;
    }
    else
    {
        ptr->next=cur;
        ptr=cur;
    }
    }

}

void display(struct node *h)
{   
    struct node *cur;
    printf("linked list:\t");
  for(cur=h;cur!=NULL;cur=cur->next)
  {
      printf("%d\t",cur->data);
  }

}

void search(struct node *h,int x)
{
    int flag=0;
    struct node *cur;
    for(cur=h;cur!=NULL;cur=cur->next)
    {
        if(cur->data==x)
        {
           flag=1;
        }
    }
    if(flag==1)
    {
        printf("\nfound\n");
    }
    else
    {
        printf("\nNot found\n");
    }
}

void insert(struct node **h,int x,int p)
{
   struct node *cur;
   struct node *ptr;
   cur=(struct node *)malloc(sizeof(struct node));
   cur->data=x;
   cur->next=NULL;
   if(*h==NULL)
   {
       *h=cur;
   }
   else if(p==0)
   {
       cur->next=*h;
       *h=cur;
   }
   else
   {
       ptr=*h;
       int i=1;
       while(i<p && ptr->next!=NULL)
       {
           ptr=ptr->next;
           i++;
       }
    cur->next=ptr->next;
    ptr->next=cur;
    
   }
}
void del(struct node **h,int p)
{
    struct node *ptr;
    struct node *prv;
    if(*h==NULL)
    {
        printf("emp");
    }
    else if(p==0)
    {
        ptr=*h;
        *h=ptr->next;
        free(ptr);
    }
    else
    {
         ptr=*h;
       int i=1;
       while(i<p && ptr->next!=NULL)
       {   
           prv=ptr;
           ptr=ptr->next;
           i++;
       }
       prv->next=ptr->next;
       free(ptr);
    }
}

int main()
{
    struct node *head=NULL;
    create(&head);
    display(head);
    search(head,7);
    insert(&head,2,6);
    display(head);
    printf("\n");
    del(&head,3);
    display(head);
    return 0;
}
 