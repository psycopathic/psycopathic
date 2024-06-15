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
void subarray(vector<int>&arr)
{
    int n = arr.size();
    int len = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
           cout<<"\n";
        }
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    subarray(arr);
    return 0;
}