#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
 using namespace std;
// first we have to check for operand and operator
// second we have to check for precedency order that is to be followed
// third check the push and pop precedency accordingly
int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='('||x==')')
    return 0;
    return 1;
}

int outPre(char x)
{
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/')
    return 3;
    else if(x=='^')
    return 6;
    else if(x=='(')
    return 7;
    else if(x==')')
    return 0;
    return -1;
}
// int outPre(char x)
// {
//     if(x=='+'||x=='-')
//     return 1;
//     else if(x=='*'||x=='/')
//     return 3;
//     else if(x=='^')
//     return 6;
//     else if(x=='(')
//     return 7;
//     else if(x==')')
//     return 0;
//     return -1;
// }
int inpre(char x)
{
     if(x=='+'||x=='-')
    return 2;
    else if(x=='*'||x=='/')
    return 4;
    else if(x=='^')
    return 5;
    else if(x=='(')
    return 8;
    else if(x==')')
    return 0;
    return -1;
}
char *convert(char* infix)
{
   char *postfix = new char[strlen(infix)+1];
   stack<char>s;
   int i=0;
   int j=0;
   while(infix[i]!='\0')
   {
    if(isOperand(infix[i]))
      postfix[j++]=infix[i++];
      else{
        if(s.empty() || outPre(infix[i])>inpre(s.top())){
            s.push(infix[i++]);
        }
            else if(outPre(infix[i]) ==inpre(s.top()))
            s.pop();
            else{
            postfix[j++]=s.top();
            s.pop();
            }
        
      }
   }
   while(!s.empty() && s.top()!=')'){
    postfix[j++] = s.top();
    s.pop();
   }
   postfix[j]='\0';
   return postfix;
}
int main()
{
     char infix[] = "((a+b)*c)-d^e^f";
     cout << convert(infix) << endl;
    return 0;
}