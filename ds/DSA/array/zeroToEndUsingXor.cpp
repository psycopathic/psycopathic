// XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
// XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2
#include<iostream>
#include<vector>
using namespace std;
void zeroToEndUsingXor(vector<int>arr)
{
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<arr.size()-1;i++)
    {
        xor1 = xor1^arr[i];
        xor2 = xor2^(i+1);
    }
    xor2 = xor2^arr.size();
    int a = xor1^xor2;
    cout<<a<<endl;
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
   zeroToEndUsingXor(arr);
//    for(int i = 0 ;i<arr.size();i++)
//    {
//     cout<<arr[i]<<" ";
//    }
   return 0;
}