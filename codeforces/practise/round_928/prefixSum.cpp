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
void prefixSum(vector<int>arr){
    vector<int>temp(arr.size());
    temp[0] = arr[0];
    for(int i=1;i<arr.size();i++)
    {
       temp[i] = temp[i-1]+arr[i];
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    prefixSum(arr);
    return 0;
}