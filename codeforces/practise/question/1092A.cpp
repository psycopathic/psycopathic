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
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i+=2){
       
            count+=(arr[i+1]-arr[i]);
        
    }
    cout<<count<<endl;
    return 0;
}