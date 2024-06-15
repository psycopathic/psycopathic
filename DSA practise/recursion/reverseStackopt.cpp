/*reverse stack using o(1) auxilary space*/
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
  void insertAtBottom(stack<int>& St, int element) {
        if(St.empty()) {
            St.push(element);
            return;
        }
        
        int cur_top_el = St.top();
        St.pop();
        insertAtBottom(St, element);
        St.push(cur_top_el);
    }

    void Reverse(stack<int> &St){
        if(St.empty()) {
            return;
        }
        int top = St.top();
        St.pop();
        
        Reverse(St);
        insertAtBottom(St, top);
    }
int main()
{
    stack<int>s;
    int n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    Reverse(s);
    cout << "Reversed Stack" << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}