#include<iostream>
#include<vector>
using namespace std;
// int main()
// {
//     vector<int>arr;
//     for(int i=1;i<=5;i++)
//     {
//         arr.push_back(i);
//     }
//     cout<<"\noutput of begin and end\n";
//     for(auto i = arr.begin();i!=arr.end();i++){
//         cout<<*i<<" ";
//     }
//     cout<<"output of begin and end\n";
//     for(auto i = arr.cbegin();i!=arr.cend();i++){
//         cout<<*i<<" ";
//     }
//     cout<<"output of begin and end\n";
//     for(auto i = arr.rbegin();i!=arr.rend();i++){
//         cout<<*i<<" ";
//     }
//     cout<<"output of begin and end\n";
//     for(auto i = arr.crbegin();i!=arr.crend();i++){
//         cout<<*i<<" ";
//     }
// }
// int main(){
//     vector<int>arr;
//     for(int i=1;i<=5;i++)
//     {
//         arr.push_back(i);
//     }
//     cout<<"size : "<<arr.size();
//     cout<<"\ncapacity : "<<arr.capacity();
//     cout<<"\nMax size : "<<arr.max_size();

//     arr.resize(4);

//      cout<<"\nsize : "<<arr.size();

//      if(arr.empty() == false)
//      {
//         cout<<"\nvector is not empty";
//      }
//      else{
//         cout<<"\nvector is empty";
//      }
//      arr.shrink_to_fit();
//      cout<<"\nvector elements are: ";
//      for(auto it = arr.begin();it!=arr.end();it++)
//      {
//         cout<<*it<<" ";
//      }
//      return 0;
// }
// int main(){
//   vector<int>v;
//   v.assign(5,10);
//   v.push_back(11);
//   int n = v.size();
//   cout<<"\nlast element is : "<<v[n-1];
// //   cout<<"\nlast element is : "<<v[n-2];

// v.pop_back();
// cout<<"\nelements are : ";
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";

// v.erase(v.begin());

// cout<<"\nfirst element is : "<<v[0];

// cout<<"\nelements are : ";
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";

// v.emplace(v.begin(),5);
// }

int main(){
  vector<int>arr;

  for(int i=0;i<10;i++)
  {
    arr.push_back(i);
  }
  cout<<"the element present in vector are : ";
  for(auto it = arr.begin();it != arr.end();it++){
      cout<<*it<<" ";
  }
  cout<<"\nfront element of vector : "<<arr.front();
  cout<<"\nback element of vector : "<<arr.back();
  cout<<"\nfront element of vector : "<<arr.size();
  cout<<"\nback element of vector : "<<arr[arr.size()-1];

  arr.pop_back();
  cout<<"\nback element of vector : "<<arr.back();
  cout<<endl;
  arr.insert(arr.begin()+7,5);
  for(auto it = arr.begin();it != arr.end();it++){
      cout<<*it<<" ";
  }
  arr.erase(arr.begin());
   cout << "\nNow the first element is: " << arr[0] << endl;

   if(arr.empty())
   cout<<"\nvector is empty";
   else
   cout<<"\nvector is not empty";

   arr.clear();
   cout <<"\nSize of the vector after clearing the vector: "<< arr.size();
}