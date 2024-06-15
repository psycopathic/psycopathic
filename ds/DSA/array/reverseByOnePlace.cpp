#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseOnePlace(vector<int>&arr)
{
    int n = arr.size();
    int x = arr[0];
    for(int i = 1;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = x;
}
int main(){
     int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    //cout<<endl;
    int k;
    cin>>k;
   reverseOnePlace(arr);
   for(int i = 0 ;i<arr.size();i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}