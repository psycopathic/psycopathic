#include<iostream>
#include<vector>
#include<map>
using namespace std;
int subarray(vector<int>&arr,int num)
{
    int n = arr.size();
    long long sum = 0;
    int maxlen = 0;
    map<int,int>m;
    for(int i = 0;i<n;i++)
    {
        sum+=arr[i];

        if(sum==num)
        {
            maxlen = max(maxlen,i+1);
        }

        long long rem = num-sum;
        if(m.find(rem)!=m.end()){
            int len = i - m[rem];
            maxlen = max(maxlen,len);
        }
        if(m.find(sum)==m.end())
        {
            m[sum] = i;
        }
    }
    return maxlen;
}
int main(){
    vector<int>arr={2,3,5,1,9};
    int k = 10;
    int ans = subarray(arr,k);
    cout<<ans<<endl;
    return 0;
}