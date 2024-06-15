// multimap in STL are associative containers like maps where each element consists of a key value and a mapped value, the only difference is multimaps can store duplicate elements
#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,int>mp;
    for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }
  mp.insert({4,70});
  cout << "Elements present in the multimap: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }
  int n = 4;
  multimap<int,int>::iterator it;
  it = mp.find(n);

    if (it != mp.end()) {
        cout << it->second << " has the key "<< n << endl;
    } else {
        cout << n << " is not present in multimap" << endl;
    }

}