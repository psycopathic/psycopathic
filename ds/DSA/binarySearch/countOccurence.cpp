#include<iostream>
#include<vector>
using namespace std;
int upperBound(vector<int>&arr,int key)
{
    int n=arr.size();
    int s = 0;
    int l = n-1;
    int ans = key;
    while(s<=l)
    {
        int mid = l+(s-l)/2;
        if(arr[mid]>key){
            ans = arr[mid];
            l = mid-1;
        }
        else
        s = mid+1;
    }
    return ans;
}
int lowerBound(vector<int>&arr,int key)
{
    int n=arr.size();
    int s = 0;
    int l = n-1;
    int ans = key;
    while(s<=l)
    {
        int mid = l+(s-l)/2;
        if(arr[mid]>=key)
        {
            ans = mid;
            l = mid-1;
        }
        else
        s = mid+1;
    }
    return ans;
}
pair<int,int>fistLast(vector<int>&arr,int key)
{
    int first = lowerBound(arr,key);
    if(first == -1)return{-1,-1};
    int last = upperBound(arr,key);
    return {first,last};
}
int count(vector<int>&arr,int key)
{
    pair<int,int>x = fistLast(arr,key);
    if(x.first == -1)return 0;
    return x.second-x.first+1;
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
    int res = count(arr,key);
    cout<<res<<endl;
    return 0;
}