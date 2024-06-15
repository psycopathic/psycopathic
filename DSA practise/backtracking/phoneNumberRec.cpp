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

void combo(string digits, vector<string>& res, string chars[], int i, string s);

vector<string> letterCombinations(string digits) {
    vector<string> res;
    if (digits.length() == 0) return res;

    string chars[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    combo(digits, res, chars, 0, "");
    return res;
}

void combo(string digits, vector<string>& res, string chars[], int i, string s) {
    if(i == digits.size()) {
        res.push_back(s);
        return;
    }
    string v = chars[digits[i]-'0'];
    for(int j = 0; j < v.size(); j++)
        combo(digits, res, chars, i + 1, s + v[j]);
}

int main() {
    string digit;
    cin >> digit;
    vector<string> res = letterCombinations(digit);
    for(auto x : res)
        cout << x << " ";
    return 0;
}
