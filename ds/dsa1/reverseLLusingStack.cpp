#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class node
{
public:
int data;
node *next;
}*head=NULL;
void create(int arr[],int n){
node *temp,*last;
head = new node();
head->data=arr[0];
head->next=NULL;
last=head;
for(int i=1;i<n;i++)
{
temp=new node();
temp->data=arr[i];
temp->next=NULL;
last->next=temp;
 last = temp;
}
}
void display()
{
node *ptr = head;
while(ptr!=NULL)
{
cout<<ptr->data;
ptr=ptr->next;
}
}
    void reverse()
    {
        if(head == NULL)
        return;
        stack<node*>s;
        node *temp = head;
        while(temp!=NULL)
        {
            s.push(temp);
            temp = temp->next;
        }
        temp = s.top();
        head = temp;
        s.pop();
        while(!s.empty())
        {
            temp->next = s.top();
            s.pop();
            temp = temp->next;
        }
        temp->next = NULL;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    create(arr,n);
    reverse();
    display();
    return 0;
}