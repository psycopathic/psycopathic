// map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value.
#include<iostream>
#include<map>
#include<vector>
using namespace std;
// int main(){
//     map<int,int>map;
//     for(int i=1;i<=5;i++)
//     map.insert({i,i+10});
//      cout << "Elements present in the map: " << endl;
//   cout << "Key\tElement" << endl;
//   for (auto it = map.begin(); it != map.end(); it++) {
//     cout << it -> first << "\t" << it -> second << endl;
//   }
//   map.insert({7,17});
//   map.insert({6,16});
//       cout << "Elements present in the map: " << endl;
//   cout << "Key\tElement" << endl;
//   for (auto it = map.begin(); it != map.end(); it++) {
//     cout << it -> first << "\t" << it -> second << endl;
//   }
//     int n = 2;
//   if (map.find(2) != map.end())
//     cout << n << " is present in map" << endl;
    
//     map.erase(map.begin());
//   cout << "Elements after deleting the first element: " << endl;
//   cout << "Key\tElement" << endl;
//   for (auto it = map.begin(); it != map.end(); it++) {
//     cout << it -> first << "\t" << it -> second << endl;
//   }
//     cout << "The size of the map is: " << map.size() << endl;
//      if (!map.empty() == false)
//     cout << "The map is not empty " << endl;
//   else
//     cout << "The map is empty" << endl;
//       map.clear();
//   cout << "Size of the map after clearing all the elements: " << map.size();
// }
void mapping(vector<int>arr)
{
  int n = arr.size();
  map<int,int>map;
  for(int i=0;i<n;i++)
  {
    map[arr[i]]++;
  }
  for(auto x : map)
  {
     cout<<x.first<<" "<<x.second<<endl;
  }
}
int main(){
  vector<int>arr = {1,2,1,2,3};
  mapping(arr);
  return 0;
}