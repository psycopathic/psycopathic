#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void reverse(char *a,int n)
{
   stack<int>s;
   for(int i=0;i<n;i++)
   {
      s.push(a[i]);
   }
   for(int i=0;i<n;i++)
   {
    a[i]=s.top();//overwrite the charater at index i
    s.pop();//pop it out
   }
}
int main()
{

    char c[51];
    printf("enter the string : ");
    gets(c);
    reverse(c,strlen(c));
    printf("output : %s",c);
    return 0;
}