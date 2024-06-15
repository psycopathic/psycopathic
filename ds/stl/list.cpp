// Lists are sequence containers 
// that allow non-contiguous memory 
// allocation. As compared to the vector, 
// the list has slow traversal, 
// but once a position has been found, 
// insertion and deletion are quick (constant time). 
// Normally, when we say a List,
//  we talk about a doubly linked list. 
//  For implementing a singly linked list, 
//  we use a forward_list.

// std::list is the class of the List container. 
// It is the part of C++ Standard Template Library (STL)
//  and is defined inside <list> header file.


#include<iostream>
#include<list>
using namespace std;
void printlist(list<int>g)
{
   list<int>::iterator it;
   for(it = g.begin();it!=g.end();it++)
   {
      cout<<*it<<" ";
   }
   cout<<endl;
}
int main(){
   list<int>g;
   for(int i = 0 ;i<5;i++)
   {
       int x;
       cin>>x;
       g.push_back(x);
   } 
   cout<<"element of the list are : \n";
   printlist(g);
   cout<<"reverse list\n";
   g.reverse();
   printlist(g);
   cout<<"list sorting\n";
   g.sort();
   printlist(g);
       cout<<"The size of the list is: "<<g.size()<<endl;
    cout<<"The first element in the list: "<<g.front()<<endl;
     cout<<"Deleting the first element"<<endl;
    g.pop_front();
    printlist(g);
      cout<<"The last element of the list: "<<g.back()<<endl;
    cout<<"Deleting the last element"<<endl;
    g.pop_back();
    printlist(g);
   return 0;
}

// operation of list includes:
// 1.front();
// 2.back();
// 3.push_back();
// 4.push_front();
// 5.pop_front();
// 6.pop_back();
// 7.insert();
// 8.size();
// 9.begin();
// 10.end();
