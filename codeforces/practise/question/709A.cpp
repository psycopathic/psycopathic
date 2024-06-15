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
    int n,b,d;
    cin>>n>>b>>d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
      int count = 0,empty = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>b){
            continue;
        }
          count+=arr[i];
        if (count > d){
            empty++;
            count = 0;
        }
    }
    cout<<empty<<endl;
    return 0;
}