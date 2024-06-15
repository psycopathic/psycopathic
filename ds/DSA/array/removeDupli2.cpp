// Take a variable i as 0;
// Use a for loop by using a variable ‘j’ from 1 to length of the array.
// If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
//  After completion of the loop return i+1, i.e size of the array of unique elements.
#include<iostream>
#include<vector>
using namespace std;
int isdupli(vector<int>&arr)
{
    int j = 0;
    int n = arr.size();
    for(int i=1;i<n;i++)
    {
       if(arr[j]!=arr[i])
       {
        j++;
        arr[j]=arr[i];
       }
    }
    return j+1;
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
   int res = isdupli(arr);
   for(int i = 0;i<res;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}