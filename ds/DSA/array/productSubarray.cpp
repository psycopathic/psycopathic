#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void productMultiple(vector<int>&arr){
    int n = arr.size();
    int maxPro = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int pro = 1;
            for(int k=i;k<=j;k++)
            {
                pro*=arr[k];
            }
            maxPro=max(maxPro,pro);
        }
    }
    cout<<maxPro<<endl;
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
    productMultiple(arr);
    return 0;
}