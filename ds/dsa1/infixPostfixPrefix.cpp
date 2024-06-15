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
/*
precedence of the operator
1.paretheses  (),{},[]
2.exponents  if multiple exponent => (right to left)
3.multipliction and division (left and right)
4.addition and subtraction  (left to right)

infix = operand   operator   operand  2+3
prefix = operator   operand   operand  +23
postfix = oprand   operand   operator  23+

*/
int precedence(char c)
{
    if(c=='^')
    return 3;
    if(c=='/' || c=='*')
    return 2;
    if(c=='+'|| c=='-')
    return 1;
    else
    return -1;
}
void infixToPostfix(string s)
{
    stack<char>st;
    string res;
    for(int i=0;i<s.length();i++)
    {
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z') || (c >= '0' && c <= '9'))
        res+=c;
        else if(c == '(')
        st.push('(');
        else if(c==')')
        {
            while(st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && precedence(s[i]) < precedence(st.top()) || !st.empty() && precedence(s[i]) == precedence(st.top())){
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    cout<<res<<endl;
}
int main()
{
    string exp = "(a+b)*(d+c)";
 
    // Function call
    infixToPostfix(exp);
    return 0;
}