#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*top=NULL;
void push(int x)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    printf("stack is full\n");
    else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}
int  pop()
{
    struct node *temp;
    int x=-1;
    if(top==NULL)
    printf("stack is empty\n");
    else{
        temp = top;
        top=top->next;
        x=temp->data;
        free(temp);
    }
    return x;
}
void display()
{
    struct node *ptr=top;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    int x;
    scanf("%d",&x);
    push(x);
  }
  pop();
  display();
}