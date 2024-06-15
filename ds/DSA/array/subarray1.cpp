#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;
int subarray(vector<int>&arr,int K)
{
    int n = arr.size();
    int len = 0;
    for(int i =0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            long long sum = 0;
            for(int k = i;k<=j;k++)
            {
                sum+=arr[k];
            }
            if(sum==K)
            len = max(len,j-i+1);
        }
    }
    return len;
}
int main()
{
    vector<int>arr={2,3,5,1,9};
    int k = 10;
    int ans = subarray(arr,k);
    cout<<ans<<endl;
    return 0;
}