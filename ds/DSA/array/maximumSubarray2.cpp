#include<iostream>
#include<vector>
#include<map>
using namespace std;
int kadane(vector<int>&arr)
{
    int n = arr.size();
    int maximum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            int sum = 0;
            for(int k = i;k<=j;k++)
            {
                sum+=arr[i];
            }
            maximum = max(maximum,sum);
        }
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