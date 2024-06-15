#include<iostream>
#include<vector>
using namespace std;
void sort0122(vector<int>&arr)
{   
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while(mid<=high)
    {
    if(arr[mid]==0)
    {
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
    else if(arr[mid]==1)
    {
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
     }
    }
    for(int i = 0;i<arr.size();i++)
    cout<<arr[i]<<" ";
}
int main(){
  vector<int>arr;
  arr.push_back(2);
  arr.push_back(0);
  arr.push_back(2);
  arr.push_back(1);
  arr.push_back(1);
  arr.push_back(2);
  sort0122(arr);
  return 0;
}