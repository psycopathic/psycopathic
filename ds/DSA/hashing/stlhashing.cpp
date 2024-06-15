#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        arr[i]=x; 
    }
     unordered_map<int,int>map;
     for(int i=0;i<n;i++)
     {
        map[arr[i]]++;
     }
     int maxE = 0,maxF = 0,minE = 0,minF = n;
     for(auto x : map){
        int num = x.first;
        int freq = x.second;
        if(freq>maxF)
        {
            maxF = freq;
            maxE = num;
        }
        if(freq<minF)
        {
            minF = freq;
            minE = num;
        }
     }
     cout<<"highest frequency is of : "<<maxE<<" by "<<maxF<<endl;
     cout<<"lowest frequency is of : "<<minE<<" by "<<minF<<endl;
     return 0;
}