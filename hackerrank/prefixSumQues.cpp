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

vector<int>prefix(vector<int>arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>rearr = prefix(arr);
    // for(int i=0;i<rearr.size();i++){
    //     cout<<rearr[i]<<" ";
    // }

    int r,l;
    cin>>r>>l;

    if(l>n-1){
        cout<<"out of limit"<<endl;
        return 0;
    }

    int sum = 0;

    for(int i=r;i<=l;i++){
        // cout<<arr[i]<<" ";
        sum+=rearr[i];
    }
    cout<<sum<<endl;
    return 0;
}