#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
using namespace std;
int check(vector<int>&arr,int sum)
{
    int res = 0;
    int part = 1;
    for(int i=0;i<arr.size();i++)
    {
        if(res+arr[i]<=sum)
        res+=arr[i];
        else{
            part++;
            res=arr[i];
        }
    }
    return part;
}
int BinarySearch(vector<int>&arr,int n)
{
    int s = *max_element(arr.begin(),arr.end());
    int l =  accumulate(arr.begin(), arr.end(), 0);
    while(s<=l)
    {
        int mid = s+(l-s)/2;
        int val = check(arr,mid);
        if(val>n)
        {
            s = mid+1;
        }
        else{
            l = mid-1;
        }
    }
    return s;
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
    cin>>key;
    int res = BinarySearch(arr,key);
    cout<<res<<endl;
    return 0;
}