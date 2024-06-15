#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(vector<int>&arr,int key)
{
   int n = arr.size();
   int s = 0;
   int l = n-1;
   if( n == 1)
   return arr[0];
   if(arr[0]!=arr[1])
   return arr[0];
   if(arr[n-2]!=arr[n-1])
   return arr[n-1];
   
   while(s<=l)
   {
     int mid = s+(l-s)/2;
     if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
     return arr[mid];
     if((mid%2==0 && arr[mid]==arr[mid+1])||(mid%2==1 && arr[mid]==arr[mid-1]))
     s = mid+1;
     else
     l = mid-1;
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
    int key;
    cin>>key;
    int num = check(arr,key);
    cout<<num<<endl;
    return 0;
}