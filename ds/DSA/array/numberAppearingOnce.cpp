#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(5);

    map<int,int>m;
    for(int i = 0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        if(x.second == 1){
            cout<<x.first;
        }
    }
    return 0;
}