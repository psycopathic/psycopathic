#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
// bool isSorted(int arr[],int n){
// 	//base case
// 	if(n==1 or n==0){
// 		return true;
// 	}
// 	//rec case
// 	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
// 		return true;
// 	}
// 	return false;
// }
bool isSorted(int arr[],int n)
{
    if(n==1 || n==0)
    {
        return true;
    }
    if(arr[0]<arr[1] && isSorted(arr+1,n-1))
    return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<isSorted(arr,n);
    return 0;
}