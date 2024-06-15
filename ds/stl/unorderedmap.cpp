// unordered_map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value. The elements can be in any order.
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// int main(){
//     unordered_map<int,int>map;
//     //vector<int>arr{1,3,5,7,9};
//     // for(int i=1;i<=5;i++)
//     // {
//     //     map.insert({i,10*i});
//     // }
//     map.insert({3,4});
//     map.insert({5,4});
//      map.insert({4,2});
//     map.insert({2,1});
//     cout<<"elements present in map"<<endl;
//     cout<<"key\telement"<<endl;
//     for (auto it = map.begin(); it != map.end(); it++) {
//     cout << it -> first << "\t" << it -> second << endl;
//   }
//   int n = 2;
//   if(map.find(n)!= map.end())
//   cout<<"present"<<endl;
//   else
//   cout<<"shaant"<<endl;

// //   map.erase(map.begin());
// //   cout<<"element after deleting the first element : "<<endl;
// //   cout<<"key\telement"<<endl;
// //   for (auto it = map.begin(); it != map.end(); it++) {
// //     cout << it -> first << "\t" << it -> second << endl;
// //   }
// //     cout << "The size of the map is : " << map.size() << endl;
// //      if (map.empty() == false)
// //     cout << "The map is not empty " << endl;
// //   else
// //     cout << "The map is empty" << endl;
// //       map.clear();
// //   cout << "Size of the set after clearing all the elements: " << map.size();


// }
int main(){
    int n;
    cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        arr[i] = x;
     }
     unordered_map<int,int>map;
     for(int i=0;i<n;i++)
     {
        map[arr[i]]++;
     }
     cout<<"elements present in map"<<endl;
    cout<<"key\telement"<<endl;
    for (auto it = map.begin(); it != map.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }
  return 0;
}