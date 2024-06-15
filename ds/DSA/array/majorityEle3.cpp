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
int majorityElement(vector<int>&arr)
{
    int n = arr.size();
    int count = 0;      //jab bhi jada hoga toh change hokar update ho jaiga
    int ele;
    for(int i = 0;i<n;i++)
    {
        if(count==0)
        {
            count=1;
            ele = arr[i];
        }
        else if(ele==arr[i])
        count++;
        else
        count--;
    }
    int count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        count1++;
    }
    if(count1>n/2)
    return ele;
    return -1;
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
    int a = majorityElement(arr);
    cout<<a<<endl;
    return 0;
}