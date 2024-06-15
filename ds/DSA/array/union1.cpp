#include<iostream>
#include<vector>
using namespace std;
vector<int> findUnion(vector<int>arr1,vector<int>arr2)
{
    vector<int>arr3;
   int n1 = arr1.size();
   int n2 = arr2.size();
   int i=0,j=0;
   while(i<n1 && j<n2)
   {
    if(arr1[i]==arr2[j])
    {
       arr3.push_back(arr1[i]);
       i++;
       j++;
    }
    else if (arr1[i]<arr2[j])
    {
       arr3.push_back(arr1[i]);
       i++;
    }
    else{
        arr3.push_back(arr2[j]);
        j++;
    }
   }
   while(i<n1)
   {
    arr3.push_back(arr1[i]);
    i++;
   }
   while(j<n2)
   {
    arr3.push_back(arr2[j]);
    j++;
   }
   return arr3;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>arr1 = {2,3,4,5,6};
    vector<int>res = findUnion(arr,arr1);
    for(auto x : res)
    {
        cout<<x<<" ";
    }
    return 0;
}