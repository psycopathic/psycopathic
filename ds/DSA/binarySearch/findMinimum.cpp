#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(vector<int>&arr,int key)
{
   int n = arr.size();
   int s = 0;
   int l = n-1;
   int ans = INT_FAST8_MAX;
   while(s<=l)
   {
       int mid = s+(l-s)/2;
       if(arr[s]<=arr[mid]){
        ans = min(ans,arr[s]);
        s = mid+1;
       }
       else{
        ans = min(ans,arr[mid]);
        l = mid-1;
       }
   }
   return ans;
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