//is a container that stores unique elements in a sorted order.
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    for(int i=1;i<11;i++)
    s.insert(i);

    cout<<"element present in the set : ";
    for(auto it = s.begin();it!=s.end();it++)
    cout<<*it<<" ";

    cout<<endl;

    int n = 2;
    if(s.find(n)!=s.end())
    cout<<n<<" is present in set "<<endl;

    s.erase(s.begin());
    cout<<"element after deleting the first element : ";
    for(auto it = s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    cout << "The size of the set is: " << s.size() << endl;
    if(!s.empty() == false)
    cout<<"the set is not empty"<<endl;
    else
    cout<<"the set is empty"<<endl;
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
    return 0;
}