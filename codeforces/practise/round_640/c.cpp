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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int number = 1;
        int count = 0;
        while(k!=count)
        {
            if(number % n != 0)
            {
                count++;
            }
            number++;
        }
        cout<<number-1<<endl;
    }
    return 0;
}