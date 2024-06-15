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
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count > arr.size()/2)
        return arr[i];
    }
}
int main()
{
    vector<int>arr = {2,2,1,1,1,2,2};
    int a = majorityElement(arr);
    cout<<a<<endl;
    return 0;
}