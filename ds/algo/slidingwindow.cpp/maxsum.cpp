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
int maxSum(vector<int>arr,int k)
{
    int maxSum = 0;
    for(int i=0;i<k;i++){
        maxSum+=arr[i];
    }
    int window = maxSum;
    for(int i = k;i<arr.size();i++)
    {
        window+=arr[i] - arr[i-k];
        maxSum = max(maxSum,window);
    }
    return maxSum;
}
int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k; // size of window......
    cin>>k;
    int x = maxSum(arr,k);
    cout<<x<<endl;
    return 0;
}