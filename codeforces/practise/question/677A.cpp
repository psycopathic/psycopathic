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
      int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}