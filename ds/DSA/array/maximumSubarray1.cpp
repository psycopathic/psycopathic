#include<iostream>
#include<vector>
#include<map>
using namespace std;
void kadane(vector<int>&arr)
{
    int n = arr.size();
    int maximum = 0;
    int sum = 0;
    int start = 0;
    int begin = -1;
    int end = -1;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        start = i;
        
        sum+=arr[i];

        if(sum>maximum)
        {
            maximum = sum;
            begin = start;
            end = i;
        }
        if(sum<0)
        sum = 0;
    }
   for(int i = begin;i<= end;i++)
   {
    cout<<arr[i]<<" ";
   }
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
    kadane(arr);
    //cout<<res<<endl;
    return 0;
}