#include<iostream>
#include<vector>
using namespace std;
bool issorted(vector<int>&arr)
{
   int n = arr.size();
   int count = 1;
   for(int i=0;i<n-1;i++)
   {
     if(arr[i]<arr[i+1]){
        count++;
     }
   }
   return (count==n)? true :  false;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    bool s = issorted(arr);
    if(s==1)
    cout<<"sorted"<<endl;
    else
    cout<<"not sorted"<<endl;
    return 0;
}