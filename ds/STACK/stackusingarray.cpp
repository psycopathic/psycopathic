#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
template<typename T>
class stack
{   int size;
    int top;
     T *arr=new T[size];
    public:
    stack(int n)
    {
        size=n;
        top=-1;
    }
    void push(T x)
    {
        if(top==size-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
    void pop()
    { 
        T x;
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            x=arr[top];
            top--;
        }
    }
    T peek(int index)
    {
        int x;
        if(top-index+1<0)
        {
            cout<<"invalid position"<<endl;
        }
        else
        {
            x=arr[top-index+1];
        }
        return x;
    }
   T stacktop()
    {
        if(top==-1)
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    int isempty()
    {
        if(top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isfull()
    {
        if(top==size-1)
        return 1;
        else
        return 0;
    }
};
int main()
{
    cout<<"enter the size of stack"<<endl;
    int n;
    cin>>n;
    stack<char>s(n);
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        s.push(x);
    }
    while(!s.isempty())
    {
        cout<<s.stacktop()<<endl;
        s.pop();
    }
    cout<<s.stacktop()<<endl;
    s.push('h');
    cout<<s.stacktop();
    return 0;
}