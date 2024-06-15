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
    vector<int>arr(n+1);
    int in = n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[num] = 1;
        while(arr[in]){
            cout<<in<<" ";
            in--;
        }
        cout<<endl;
    }
    return 0;
}