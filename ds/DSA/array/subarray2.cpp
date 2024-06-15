//using two loop
#include<iostream>
#include<vector>
using namespace std;
int subarray(vector<int>&arr,int comp)
{
    int n = arr.size();
    int len =0;
    for(int i=0;i<n;i++)
    {
        long long sum = 0;
        for(int j = i;j<n;j++)
        {
            sum+=arr[j];
        
        if(sum==comp){
        len = max(len,j-i+1);
        }
      }
    }
    return len;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int k = 5;
    int length = subarray(arr,k);
    cout<<length<<endl;
    return 0;
}