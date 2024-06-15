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
    int m;
    cin>>n>>m;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    int rSum=0;
    int lSum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == j){
                rSum+=arr[i][j];
            }
            if(i+j == n-1){
                lSum+=arr[i][j];
            }
        }
    }

    // cout<<rSum<<" "<<lSum<<endl;

    cout<<abs(rSum-lSum)<<endl;
    return 0;
}