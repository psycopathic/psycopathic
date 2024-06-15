/*
a list or collection with the restriction that insertion can be performed at one end and deletion ca n be performed at other end
operation on queue
1.enqueue
2.dequeue
3.front or peek
4.isempty*/
#include<stdio.h>
#include<stdbool.h>
#define max 50
int arr[max];
int rear =-1;
int front = -1;
void enqueue(int);
void dequeue();
void display();
bool isempty();
int peek();

void enqueue(int x)
{
    int a;
    if(rear == max-1)
    printf("queue overflow\n");
    else{
        if(front == -1)
        front = 0;
        rear++;
        arr[rear] = x;
    }
}
void dequeue()
{
    if(front == -1 || rear == -1)
    {
       printf("queue underflow\n");
    }
    else{
        front++;
    }
}
void display()
{
    if(front == -1)
    printf("queue is empty\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
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
    enqueue(x);
  }
  display();
  dequeue();
  printf("\n");
  display();
  return 0;
}