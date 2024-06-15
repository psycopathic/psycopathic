#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void productMultiple(vector<int>&arr){
    int n = arr.size();
    int maxPro = 0;
        for(int j=0;j<n-1;j++)
        {
            int pro = arr[j];
            for(int k=j+1;k<n;k++)
            {
                maxPro = max(pro,maxPro);
                pro*=arr[k];
            }
            maxPro=max(maxPro,pro);
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