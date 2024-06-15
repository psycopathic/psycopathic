#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(vector<int>&arr)
{
   int n = arr.size();
   int s = 0;
   int l = n-1;
   while(s<=l)
   {
     int mid = s+(l-s)/2;
     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
     return arr[mid];
     if(arr[mid] > arr[mid-1])
     {
        s = mid+1;
     }
     else{
        l = mid-1;
     }
   }
   return -1;
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
    int num = check(arr);
    cout<<num<<endl;
    return 0;
}