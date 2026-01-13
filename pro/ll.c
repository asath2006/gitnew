#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};;
struct node*head=NULL;

void list(int value)
{
    struct node*nn=(struct node*)malloc(sizeof(struct node));
   struct node*temp=head;
    nn->data=value;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
       
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
    }
}
void reverse()
{
    struct node*curr=head;
    struct node*prev=NULL;
    struct node*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
}
void display()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        list(a[i]);
    }
    reverse();
    display();
    return 0;
}
