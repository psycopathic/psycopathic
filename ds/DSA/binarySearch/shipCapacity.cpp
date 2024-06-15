#include <bits/stdc++.h>
using namespace std;
int check(vector<int>&arr,int key)
{
   int day = 1;
   int load = 0;
   int n = arr.size();
   for(int i=0;i<n;i++)
   {
     if(load+arr[i]>key)
     {
        day+=1;
        load = arr[i];
     }
     else{
        load+=arr[i];
     }
   }
   return day;
}
 int binary_search(vector<int>&arr,int days)
 {
    int s = *max_element(arr.begin(),arr.end());
    int l= accumulate(arr.begin(), arr.end(), 0);
    while(s<=l)
    {
        int mid = s+(l-s)/2;
        int res = check(arr,mid);
        if(res <= days)
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
    int num = check(arr,key);
    cout<<num<<endl;
    return 0;
}