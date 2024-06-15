#include<iostream>
#include<vector>
using namespace std;
bool binarySearch(vector<int>&arr,int key)
{
    int n=arr.size();
    int s = 0;
    int l = n-1;
    while(s<l)
    {
        int mid = l+(s-l)/2;
        if(arr[mid]==key)
        return true;
        else if(arr[mid]>key)
        s = mid+1;
        else
        l=mid-1;
    }
    return false;
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
    bool res = binarySearch(arr,key);
    if(res)
    cout<<"key is present\n";
    else
    cout<<"key is not present\n";
    return 0;
}