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
vector<int>merge(vector<int>a,vector<int>b){
    int n1 = a.size();
    int n2 = b.size();

    int i=0,j=0;
    vector<int>arr;
    while(n1>i && n2>j){
        if(a[i]<=b[i]){
          arr.push_back(a[i]);
          i++;
        }
        else{
            arr.push_back(b[j]);
            j++;
        }
    }
    
    while(n1>i){
      arr.push_back(a[i]);
       i++;
    }
    while(n2>j){
      arr.push_back(b[j]);
       j++;
    }

    return arr;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>res = merge(a,b);

    for(int i=0;i<res.size();i++)
    cout<<res[i]<<" ";
    return 0;
}