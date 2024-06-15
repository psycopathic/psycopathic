#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*top = NULL;
void push(int x)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = x;
    temp->next = top;
    top = temp;
}
void pop()
{
    struct node*temp;
    if(top == NULL)
    return ;
    else{
        temp = top;
        top = top->next;
        free(temp);
    }
}
bool isEmpty()
{
    if(top == NULL)
    return true;
    return false;
}
int peek()
{
    struct node*temp = top;
    int x = temp->data;
    return x;
}
void display()
{
    struct node*ptr = top;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
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
    display();
}