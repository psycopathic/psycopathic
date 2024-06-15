// In the case of the max heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the greatest of the elements it contains and the rest elements are in decreasing order.

// In the case of the min heap, priority queues are a type of container adaptors, specifically designed such that its first element is always the smallest of the elements it contains and the rest elements are in increasing order.

// Note: In C++ STL by default max-heap is created.
#include<iostream>
#include<queue>
using namespace std;
void print(priority_queue<int,vector<int>,greater<int>>pq)
{
    priority_queue<int,vector<int>,greater<int>> pq2=pq;
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
}
int main(){
  priority_queue<int,vector<int>,greater<int>>p;
  for(int i=1;i<=5;i++)
  {
    p.push(i);
  }
    cout<<"The elements of the priority queue are:"<<endl;
    print(p);
    cout<<"size of priority queue "<<p.size()<<endl;
    cout<<"the top element of the priority queue: "<<p.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    p.pop();
    print(p);
}