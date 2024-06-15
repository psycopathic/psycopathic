#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void productMultiple(vector<int>&arr){
    int n = arr.size();
   int pre = 1;
   int suff = 1;
   int maxPro = 0;
        for(int j=0;j<n;j++)
        {
            if(pre == 0)pre=1;
            if(suff == 0)suff=1;
            pre*=arr[j];
            suff*=arr[n-j-1];

            maxPro = max(maxPro,max(pre,suff));
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