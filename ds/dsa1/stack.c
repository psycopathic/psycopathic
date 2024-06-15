//stack implementation using array;
//LIFO => last in first out
/*
1.push()
2.pop()
3.isEmpty()
4.isFull()
5.top*/
// application:
// 1.function call
// 2.undo in editor
// 3.balanced parentheses
#include<stdio.h>
#define max_size 101
int arr[max_size];
int top = -1;
void push(int x)
{
    if(top == max_size -1)
    {
        printf("stack overflow\n");
    }
    top++;
    arr[top] = x;
}
int pop()
{
    if(top == -1)
    printf("stack is empty\n");
    else{
    int x = arr[top];
    top--;
    return x;
    }
    return -1;
}
int isEmpty()
{
    if(top == -1)
    return 1;
    return 0;
}
int peek()
{
    if(top == -1)
    {
        printf("stack is empty\n");
    }
        int x = arr[top];
        return x;
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
   for(int i=top;i>=0;i--)
   {
    printf("%d",arr[i]);
    printf("\n");
   }
   printf("%d",pop());
   for(int i=top;i>=0;i--)
   {
    printf("%d",arr[i]);
    printf("\n");
   }
   return 0;
}