#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArr(vector<int>&arr,int k)
{
    reverse(arr.begin(),arr.begin()+(arr.size()-k));
    reverse(arr.begin()+(arr.size()-k),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
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
   reverseArr(arr,k);
   return 0;
}