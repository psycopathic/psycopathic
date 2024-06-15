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
int partition(int *arr,int low ,int high)
{
    int pivot = arr[high];
    int j = low-1;
    for(int i=low;i<high;i++)
    {
        if(arr[i]<=pivot)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j+1],arr[high]);
    return j+1;
}
void quickSort(int *arr,int low ,int high)
{
    if(low>high)
    return;
    else{
        int p = partition(arr,low, high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}