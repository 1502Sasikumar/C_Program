#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertAtEnd(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if (head == NULL)  // First node case
    {
        head = newnode;
        return;
    }
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void delAtBeg()
{
    struct node *temp=head;
    head=temp->next;
    free(temp);
    temp->next=NULL;
    
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {
    
        insertAtEnd(a[i]);
       
    }
    delAtBeg();
    display();
    // insertAtEnd(10);
    // insertAtEnd(20);
    // insertAtEnd(30);
    // insertAtEnd(40);
    // insertAtEnd(50);
    // display();
}




