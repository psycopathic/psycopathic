#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&arr,int key)
{
    int n=arr.size();
    int s = 0;
    int l = n-1;
    int ans = key;
    while(s<=l)
    {
        int mid = l+(s-l)/2;
         if(arr[mid]>=key){
            ans = arr[mid];
            cout<<"oye"<<endl;
            l = mid-1;
        }
        else
        s = mid+1;
    }
    return ans;
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
    int res = binarySearch(arr,key);
    if(res)
    cout<<"key is present "<<res<<"\n";
    else
    cout<<"key is not present\n";
    return 0;
}