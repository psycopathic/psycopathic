// unordered set stores unique elements in non specified order
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    for(int i=1;i<=10;i++)
    s.insert(i);

    cout<<"element present in the unordered set :\n ";
    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int n = 2;
    if(s.find(n)!=s.end())
    cout<<n<<" is present in the set \n";
    cout<<endl;
    int start = 2;
    int end = 4;
    // for (int i = start; i <= end; i++) {
    //     s.erase(i);
    // }

    // cout<<"element present in the unordered set :\n ";
    // for(auto it = s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    // int startIndex = 2;
    // int endIndex = 5;

    // // Use the erase function to delete the range
    // s.erase(s.begin() + startIndex, s.begin() + endIndex + 1); range set pr use nhui hota hae??

    // s.erase(s.begin()+2,s.begin()+3);
    // cout<<"element present in the unordered set :\n ";
    // for(auto it = s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
}