//reversal using stack 
//string
//linked list
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
//#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#define max 101
using namespace std;
class stack{
    private:
    char arr[max];
    int top;
    public:
    stack();
    void push(char a);
    void pop();
    bool empty();
    char stacktop();
};
stack::stack(){
    top = -1;
}
void stack :: push(char a)
{
   if(top==max){
   cout<<"stack is full"<<endl;
   }
   top++;
   arr[top]=a;
}
void stack :: pop(){
    if(top==-1)
    {
      cout<<"stack is empty"<<endl;
    }
    char x = arr[top];
    top--;
    //return x;
}
bool stack:: empty()
{
    if(top==-1)
    return true;
    return false;
}
  char stack :: stacktop()
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
int main()
{
    stack s;
    int n;
    cin>>n;
   char sim[n];
    for(int i=0;i<n;i++)
    {
       char x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.stacktop();
        s.pop();
    }
    
    return 0;
}