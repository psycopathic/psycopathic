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
vector<int> reverse(stack<int>& s, int n, vector<int>& res) {
    if (n == 0)
        return res;

    int z = s.top();
    s.pop();
    res.push_back(z);

    return reverse(s, n - 1, res);
}
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    vector<int>res;
    vector<int>arr = reverse(s,n,res);
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    return 0;
}