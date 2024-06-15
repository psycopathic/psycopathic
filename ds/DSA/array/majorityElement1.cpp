#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<set>
using namespace std;
vector<int> majorityElement(vector<int>&arr)
{
    int n = arr.size();
   int count1=0,count2=0;
   int e1=INT_FAST16_MAX,e2=INT_FAST16_MAX;

   for(int i=0;i<n;i++)
   {
    if(count1==0 && e2!=arr[i])
    {
      count1=1;
      e1=arr[i];
    }
    else if(count2==0 && e1!=arr[i]){
        count2 = 1;
        e2 = arr[i];
    }
    else if(arr[i] == e1)count1++;
    else if(arr[i] == e2)count2++;
    else{
        count1--;
        count2--;
    }
   }
   vector<int>ans;
   count1=0;
   count2=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]==e1)
    count1++;
    if(arr[i]==e2)
    count2++;
   }
   int mini = int(n/3)+1;
   if(count1>=mini)
   ans.push_back(e1);
   if(count2>=mini)
   ans.push_back(e2);


   return ans;
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
    vector<int>ans = majorityElement(arr);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}