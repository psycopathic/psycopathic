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
void merge(int *arr,int left ,int mid,int right)
{
    int i,j,k;
    i = k = left;
    j = mid + 1;
    int arr1[right+1];
    while(i<=mid && j<=right)
    {
        if(arr[i]<arr[j])
        arr1[k++]=arr[i++];
        else
        arr1[k++]=arr[j++];
    }
    while(i<=mid)
    {
        arr1[k++] = arr[i++];
    }
    while(j<=right)
    {
        arr1[k++] = arr[j++];
    }
    for(int a=left;a<=right;a++)
    {
        arr[a] = arr1[a];
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}
void mergeSort(int *arr,int left ,int right)
{
    if(left >= right)
    return;
    
    int mid = left + (right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main()
{
    int n;
    cout<<"Input size of the array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    return 0;
}