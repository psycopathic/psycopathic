#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<stack>
#include<map>
using namespace std;
int isbalanced(char *exp)
{
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
                return false;
            } else {
                char temp = stk.top();
                itr = mapping.find(exp[i]);
                if (temp == itr->second){  // itr->first is key, itr->second is value
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
    }
  if(stk.empty())
  return true;
  else
  return false;
}
int main()
{
    char A[] = "{([a+b]*[c-d])/e}";
    cout << isbalanced(A) << endl;
 
    char B[] = "{([a+b]}*[c-d])/e}";
    cout << isbalanced(B) << endl;
 
    char C[] = "{([{a+b]*[c-d])/e}";
    cout << isbalanced(C) << endl;
    return 0;
}