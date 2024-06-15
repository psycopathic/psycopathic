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
//scan from left to right
//if opening symbol add it to a list 
//if closing symbol remove last opening symbol in list
bool isbalanced(char *exp)
{
    map<char,char>mapping;
    mapping['}'] = '{';
    mapping[')'] = '(';
    mapping[']'] = '[';
    map<char,char>::iterator it;
    stack<char>s;

    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i] == '{' ||exp[i] == '(' ||exp[i] == '[')
        s.push(exp[i]);
        else if(exp[i] == '}' ||exp[i] == ')' ||exp[i] == ']'){
            if(s.empty())
            return false;
            else{
                char temp = s.top();
                it = mapping.find(exp[i]);
                if(temp == it->second)
                {
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    if(s.empty())
    return true;
    return false;
}

int main()
{
    char A[] = "{([a+b]*[c-d]/e}";
    bool b = isbalanced(A);
    cout << b << endl;
    return 0;
}