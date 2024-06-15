#include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// // #include<stack>
// #include<map>
// #include<unordered_map>
// #include<unordered_set>
using namespace std;
class stack
{
    public:
    int size;
    int *s;
    int top;
};
void create(stack *st)
{
    cout<<"enter the size";
    cin>>st->size;
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}
void display(stack st)
{
   for(int i=st.top;i>=0;i--){
   cout<<st.s[i];
   cout<<"\n";
   }
}
void push(stack *s,int x)
{
    if(s->top==s->size)
    cout<<"stack is full";
    else
    {
        s->top++;
        s->s[s->top]=x;
    }
}
int pop(stack *st)
{
    int x = -1;
    if(st->top==-1)
    cout<<"stack is empty";
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int main()
{
    stack st;
    create(&st);

    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        push(&st,x);
    }
    int x = pop(&st);
    cout<<x<<endl;
    display(st);
    
    return 0;
}