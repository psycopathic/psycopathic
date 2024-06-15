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
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr1;
    vector<int>arr2;
    vector<int>arr3;

    int count1=0,count2 = 0,count3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count1++;
            arr1.push_back(i);
        }
        else if(arr[i]==2){
            count2++;
            arr2.push_back(i);
        }
        else if(arr[i]==3){
            count3++;
            arr3.push_back(i);
        }
    }
    int ans = min(count1,min(count2,count3));

    cout<<ans<<endl;

    for(int i=0;i<ans;i++){
        cout<<arr1[i]+1<<" "<<arr2[i]+1<<" "<<arr3[i]+1<<endl;
    }
    return 0;
}