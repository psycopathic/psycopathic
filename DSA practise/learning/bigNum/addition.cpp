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
string solve(string s1,string s2){
    if(s1.length()>s2.length()){
        swap(s1,s2);            //s2 bada he jo s1 me stored he ab.......
    }
    string result = "";
    int carry = 0;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=0;i<s1.length();i++){
        int d1 = s1[i] - '0';
        int d2 = s2[i] - '0';
        int sum = d1+d2+carry;
        int out = sum%10;
        carry = sum/10;

        result.push_back('0'+out);
    }
    for(int i=s1.length();i<s2.length();i++){
        int d2 = s2[i] - '0';
        int sum = d2+carry;
        int out = sum%10;
        carry = sum/10;

        result.push_back('0'+out);
    }
    if(carry == 1)
    result.push_back('1');
    reverse(result.begin(),result.end());

    return result;
}
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    string res = solve(s1,s2);
    cout<<res<<endl;
    return 0;
}