#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>&arr)
{
    int n = arr.size();
    vector<int>res;
    int one = 0;
    int zero = 0;
    int two = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            one++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            two++;
        }
    }
    while(zero--)
    {
        res.push_back(0);
    }
    while(one--)
    {
        res.push_back(1);
    }
    while(two--)
    {
        res.push_back(2);
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x = 0;
        cin>>x;
        arr.push_back(x);
    }
    sort012(arr);
    return 0;
}