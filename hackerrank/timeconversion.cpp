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
    string s = " ";
    cin>>s;
    string hrs = "";
           hrs += s[0];
           hrs += s[1];
    
    string period = "";
           period +=s[8];
           period +=s[9];

    if(hrs == "12"  && period == "AM"){
        hrs = "00";
    }
    else if(hrs < "12" && period == "PM"){
        int thrs = stoi(hrs);
            thrs += 12;
           hrs = to_string(thrs);
    }
    
    string res = hrs+":"+s[3]+s[4]+":"+s[6]+s[7];
    cout<<res<<endl;
    return 0;
}