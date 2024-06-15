/*in this question we have to allocate the books to student we are given pages array find max of min allocation
 #*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check(vector<int>&arr,int pages)
{
    int n =arr.size();
    int student = 1;
    int pageAlloc = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+pageAlloc <= pages)
        {
            pageAlloc+=arr[i];
        }
        else{
            student++;
            pageAlloc = arr[i];
        }
    }
    return student;
}
int agressiveCow(vector<int>&arr,int key)
{
    int n = arr.size();
    if(n<key)return -1;
    int s = *max_element(arr.begin(),arr.end());
    int l = 0;
    for(int i=0;i<n;i++)
    {
        l+=arr[i];
    }

    while(s<=l)
    {
        int mid = s+(l-s)/2;
        int student = check(arr,mid);
        if(student>key)
        s = mid+1;
        else
        l=mid-1;
    }
    return s;
}
int main(){
    int n,nums=0;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int key;
    cin>>key;
    int num = agressiveCow(arr,key);
    cout<<num<<endl;
    return 0;
}