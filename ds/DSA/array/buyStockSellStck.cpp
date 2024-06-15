// You are given an array of prices where prices[i] is the price of a given stock on an ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include<iostream>
#include<vector>
using namespace std;
int buyStockSellStock(vector<int>&arr){
    int n = arr.size();
    int min = INT_FAST8_MAX;
    int idx = 0;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            idx = i;
        }
    }
    int ans = -1;
    for(int i=idx;i<n;i++)
    {
        ans = max(ans,abs(min-arr[i]));
    }
    return ans;
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
   int s = buyStockSellStock(arr);
   cout<<s<<endl;
   return 0;
}
