#include<iostream>
#include<vector>
#include<map>
using namespace std;
int countReversePairs(vector<int>&arr)
{
   int n = arr.size();
   int count = 0;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
     {
        if(arr[i]>2*arr[j])
        count++;
     }
   }
   return count;
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
    int res = countReversePairs(arr);
    cout<<res<<endl;
    return 0;
}