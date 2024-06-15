#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
template<typename T>
class stack
{ 
    vector<T>arr;
    public:
    void push(T data)
    {
        arr.push_back(data);
    }
    void pop()
    {
        arr.pop_back();
    }
    T top()
    {
        return arr[arr.size()-1];
    }
    bool isempty()
    {
        if(arr.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack<int>s;
    cout<<"enter the size of stack"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.isempty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}