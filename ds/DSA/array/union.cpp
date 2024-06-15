#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int>arr={1,2,1,2,3};
    int n = arr.size();
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x : m)
    {
        if(x.second == 1)
        {
            cout<<x.first<<" appears 1 times "<<endl;
        }
    }
    return 0;
}