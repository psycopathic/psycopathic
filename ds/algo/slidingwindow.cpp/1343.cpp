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
 int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int max_sum = 0;
        int count = 0;
        for(int i=0;i<k;i++)
        {
            max_sum+=arr[i];
        }
        int window = max_sum;
        for(int i=k;i<arr.size();i++)
        {
            if(window >= threshold*k)
            count++;
            window+=arr[i]-arr[i-k];
        }
         if(window >= threshold * k)
        count++;
        return count;
 }
int main()
{
    int n;
    vector<int>arr;
    int k,threshold;
    cout<<"Enter the size of window : ";
    cin>>k;
    cout<<"Enter the threshold : ";
    cin>>threshold;
    cout<<"Enter the size of array : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int x = numOfSubarrays(arr,k,threshold);
    cout<<x<<endl;
    return 0;
}