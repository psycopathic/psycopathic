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
    vector<int>arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
         int count = 0;
    for(int i=0;i<4;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}