#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int divide(vector<int>&arr,int x)
{
    int n = arr.size();
    int total = 0;
    for(int i=0;i<n;i++)
    {
        total+=ceil((double)arr[i]/(double)x);
    }
    return total;
}
int binary_search(vector<int>&arr,int limit)
{
    int n =arr.size();
    if(n>limit)return -1;
    int s = 1;
    int l = *max_element(arr.begin(),arr.end());
    while(s<=l)
    {
        int mid = s+(l-s)/2;
        int total = divide(arr,mid);
        if(total<=limit)
        l = mid-1;
        else
        s = mid+1;
    }
    return s;
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
    int num = binary_search(arr,key);
    cout<<num<<endl;
    return 0;
}