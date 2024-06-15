#include<iostream>
#include<vector>
using namespace std;
int squareRootUsingBinarySearch(int n)
{
    int s = 1;
    int l = n;
    while(s<=l)
    {
        int mid = s+(l-s)/2;
        int val = mid*mid;
        if(val<=n)
        {
            s = mid+1;
        }
        else{
            l = mid-1;
        }
    }
    return l;
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int res = squareRootUsingBinarySearch(n);
    cout<<res<<endl;
    return 0;
}