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
void bubbleSort(vector<int>res)
{
    int n = res.size();
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(res[j]<res[i]){
                 swap(res[i],res[j]);
            }
        }
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
    }
    bubbleSort(arr);
    return 0;
}