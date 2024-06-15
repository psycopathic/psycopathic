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
vector<string>letterCombinations(string digit){
    if(digit.empty()){
        return {};
    }
    vector<string>ans{""};
    const vector<string>keypad{" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    for(int i=0;i<digit.size();i++){
        vector<string>temp;
        char d = digit[i];
        for(int j=0;j<ans.size();j++){
            string s = ans[j];
            for(int k=0;k<keypad[d - '0'].size();k++){
                char c = keypad[d-'0'][k];
                temp.push_back(s+c);
            }
        }
        ans = move(temp);
    }
   return ans;
}
int main()
{
    string s;
    cin>>s;
    vector<string>ans = letterCombinations(s);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}