// A multiset in STL is an associative container just like a set the only difference is it can store duplicate elements in it.
#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int>s;
    for(int i =0;i<=8;i++)
    s.insert(i+1);
    cout << "Elements present in the multiset: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  int n = 2;
  if(s.find(n)!=s.end())
  cout<<n<<"is present in multiset"<<endl;
  s.erase(s.begin());
  for(auto it = s.begin();it!=s.end();it++)
  cout<<*it<<" ";

  cout<<endl;
  cout<<"the size of the multiset is : "<<s.size()<<endl;

  if(s.empty() == false)
  cout<<"the multiset is not empty "<<endl;
  else
  cout<<"the multiset is empty "<<endl;

  s.clear();
  cout<<"size of the multiset : "<<s.size();
  return 0;
}