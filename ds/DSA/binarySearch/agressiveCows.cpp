#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check(vector<int>&arr,int x,int cow)
{
    int n = arr.size();
    int count = 1;
    int last = arr[0];
    for(int i = 1;i<n;i++)
    {
        if(arr[i]-last>=x)
        {
            count++;
            last = arr[i];
        }
       if(cow<=count)
       return true;
    }
    return false;
}
int agressiveCow(vector<int>&arr,int key)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    
    int s = 1;
    int l = arr[n-1]-arr[0];
    while (s<=l)
    {
        int mid = s+(l-s)/2;
        if(check(arr,mid,key)==true)
        s = mid+1;
        else
        l = mid-1;

    }
    return l;
}
int main(){
    int n,nums=0;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int key;
    cin>>key;
    int num = agressiveCow(arr,key);
    cout<<num<<endl;
    return 0;
}