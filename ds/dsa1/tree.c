#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* lchild;
    int data;
    struct node* rchild;
};
struct queue{
    int front;
    int rear;
    struct node **q;      //ek node type ka queue bana jo node store kar le
    int size;    
};
struct node *root;
void create(struct queue*q,int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->q = (struct node **)malloc(sizeof(struct node *)*q->size);
}

void enqueue(struct queue*q,struct node* x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is full\n");
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->q[q->rear]=x;
    }
}
struct node* dequeue(struct queue *q)
{
     struct node *x = NULL;
    if((q->front)==q->rear){
        printf("queue is empty\n");
    }
    else{
        q->front = (q->front+1)%q->size;
        x = q->q[q->front];
    }
    return x;
}
int isempty(struct queue *q){
    return q->front == q->rear;
}

void creation()
{
    struct node *p,*t;
    int x;
    struct queue q;
    create(&q,100);

    printf("enter root value\n");
    scanf("%d",&x);
    root = (struct node*)malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q,root);

    while(!isempty(&q))
    {
        p=dequeue(&q);
        printf("enter the left child\n");
        scanf("%d",&x);
        if(x!=-1)
        {
            t= (struct node*)malloc(sizeof(struct node));
            t->data =x;
            t->lchild=t->rchild=NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
         printf("enter the right child\n");
        scanf("%d",&x);
        if(x!=-1)
        {
            t= (struct node*)malloc(sizeof(struct node));
            t->data =x;
            t->lchild=t->rchild=NULL;
            p->rchild = t;
            enqueue(&q,t);
        }
    }

}
void preorder(struct node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int main()
{
    creation();
     
     preorder(root);
}