#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int>&arr,int key)
{
    int n=arr.size();
    int s = 0;
    int l = n-1;
    while(s<=l)
    {
        int mid = l+(s-l)/2;
        int left = arr[mid] - (mid+1);
        if(left<key)
         s = mid+1;
        else
        l = mid-1;
    }
    return 1+key+l;
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
    int key;
    cout<<"input key\n";
    cin>>key;
    int res = binarySearch(arr,key);
    cout<<res<<endl;
    return 0;
}