#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(vector<int>&arr,int key)
{
   int n = arr.size();
   int s = 0;
   int l = n-1;
   while(s<=l)
   {
    int mid = s+(l-s)/2;
    if(arr[mid]==key)
    return mid;
    if(arr[s]<=arr[mid])
    {
        if(arr[s]<=key && key<=arr[mid])
        l=mid-1;                                 //left side sorted eleminate right side
        else
        s = mid+1;
    }
    else{
        if(arr[mid]<=key && key<=arr[l])
        s = mid+1;
        else                                    //right side sorted eleminate left side
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
    int key;
    cin>>key;
    int num = check(arr,key);
    cout<<num<<endl;
    return 0;
}