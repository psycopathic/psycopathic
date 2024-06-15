#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class node
{
   public:
   int data;
   node *next;
};
class stack
{   
    private:
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int x);
    void pop();
    int isempty();
    int stacktop();
    int peek(int index);
};
 void stack::push(int x)
 {
    node *temp=new node;
    temp->data=x;
    if(temp==NULL)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
 }
 int stack::isempty()
 {
    if(top==NULL)
    return 1;
    else
    return 0;
 }
 int stack::stacktop()
 {
    if(top!=NULL)
    {
        return top->data;
    }
    return -1;
 }
 void stack:: pop()
 {
   if(top==NULL)
   {
    cout<<"empty"<<endl;
   }
   else
   {
    node *ptr=top;
    top=ptr->next;
    delete ptr;
   }
 }
 int stack::peek(int index)
 {
    int x=0;
    node *ptr=top;
    while(index>1)
    {
        ptr=ptr->next;
        index--;
    }
    if(ptr!=NULL)
    return ptr->data;
    else
    return -1;
 }
int main()
{
     stack s;
    cout<<"input the size of stack"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<s.peek(4)<<endl;
    while(!s.isempty())
    {
        cout<<s.stacktop()<<endl;
        s.pop();
    }
    return 0;
}