#include<iostream>
#include<vector>
#include<map>
using namespace std;
int kadane(vector<int>&arr)
{
    int n = arr.size();
    int sum = 0;
    int maximum = 0;
    for(int i=0;i<n;i++)
    {
      sum+=arr[i];
      if(sum>maximum)
      {
        maximum = sum;
      }
      if(sum<0)
      sum=0;
    }
    return maximum;
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
    int res = kadane(arr);
    cout<<res<<endl;
    return 0;
}