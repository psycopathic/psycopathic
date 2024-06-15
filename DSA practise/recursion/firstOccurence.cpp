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

bool firstOccurence(vector<int>arr,int key,int i)
{
    if(i == arr.size())
        return false;
    
    if(key == arr[i])
        return true;
    else
        return firstOccurence(arr, key, i + 1);
}

int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    if(firstOccurence(arr,key,0))
        cout<<"The key is present"<<endl;
    else
        cout<<"key is not present"<<endl;
    return 0;
}
