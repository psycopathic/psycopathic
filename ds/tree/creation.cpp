#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* lchild;
    node*rchild;
};

class queue{
    private:
    int size;
    int front;
    int rear;
    node **q;

 public:
 queue(int size);
 ~queue();
 bool isfull();
 bool isempty();
 void enqueue(node *x);
 node * dequeue();
};
queue::queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    q = new node* [size];
}
 
queue::~queue() {
    delete [] q;
}
 
bool queue::isempty() {
    if (front == rear){
        return true;
    }
    return false;
}
 
bool queue::isfull() {
    if (rear == size-1){
        return true;
    }
    return false;
}
 
void queue::enqueue(node* x) {
    if (isfull()){
        cout << "queue Overflow" << endl;
    } else {
        rear++;
        q[rear] = x;
    }
}
 
node* queue::dequeue() {
    node* x = nullptr;
    if (isempty()){
        cout << "queue Underflow" << endl;
    } else {
        front++;
        x = q[front];
    }
    return x;
}
node * root = new node;

void createTree()
{
    node *p;
    node *t;
    int x;
    queue q(10);
    cout<<"enter the value of root "<<endl;
    cin>>x;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.enqueue(root);
    while(!q.isempty())
    {
        p = q.dequeue();
        cout<<"enter the left child of : "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t = new node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        cout<<"enter the right child of : "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t = new node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void preorder(node* p){
    if (p){
        cout << p->data << ", " << flush;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int main() {
 
    createTree();
 
    preorder(root);
    cout << endl;
 
    return 0;
}