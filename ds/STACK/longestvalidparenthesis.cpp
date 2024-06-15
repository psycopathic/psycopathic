#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<stack>
#include<map>
using namespace std;
int isbalanced(char *exp)
{
    int count=0;
    map<char, char> mapping;
    mapping['}'] = '{';
    mapping[')'] = '(';
    mapping[']'] = '[';
    map<char, char>::iterator itr;
    stack<char> stk;
 
    for (int i=0; i<strlen(exp); i++){
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '('){
            stk.push(exp[i]);
        } else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
            if (stk.empty()){
                continue;
            } else {
                char temp = stk.top();
                itr = mapping.find(exp[i]);
                if (temp == itr->second){  // itr->first is key, itr->second is value
                   stk.pop();
                    count+=2;
                } 
            }
        }
    }
  return count;
}
int main()
{
    char A[] = ")()())";
    cout<<isbalanced(A);
    return 0;
}