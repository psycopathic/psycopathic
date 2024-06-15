#include<iostream>
using namespace std;

class node{
public:
    node *lchild;
    int data;
    node *rchild;
};

class BST{
private:
    node *root;
public:
    BST(){root = nullptr;}
    node *getroot(){return root;}
    void insert(int key);
    void inorder(node *p);
    node *search(int key);
    int countLeafNodes(node *ptr);
};

void BST::insert(int key) {
    node *t = root;
    node *p;
    node *r = nullptr; // Initialize r to nullptr
    if(root == nullptr) {
        p = new node;
        p->data = key;
        p->lchild = nullptr;   //check if root is null or not
        p->rchild = nullptr;
        root = p;
        return;
    }
    while(t != nullptr) {
        r = t;
        if(key < t->data)
            t = t->lchild;
        else if(key > t->data)
            t = t->rchild;
        else
            return; // Key already exists in the tree
    }
    p = new node;
    p->data = key;
    p->lchild = nullptr;   //creation..... 
    p->rchild = nullptr;

    if(key > r->data)
        r->rchild = p; // Insert to the right child of parent
    else
        r->lchild = p; // Insert to the left child of parent
}

void BST::inorder(node *ptr) {
    if(ptr) {
        inorder(ptr->lchild);
        cout << ptr->data << " ";
        inorder(ptr->rchild);
    }
}

node *BST::search(int key) {
    node *temp = root;
    while(temp != nullptr) {
        if(key == temp->data)
            return temp;
        else if(key < temp->data)
            temp = temp->lchild;
        else
            temp = temp->rchild;
    }
    return nullptr;
}
int BST :: countLeafNodes(node *ptr)
{
    if(ptr == NULL)
    return 0;
    if(ptr->lchild == NULL && ptr->rchild == NULL)
    return 1;
    return countLeafNodes(ptr->lchild) + countLeafNodes(ptr->rchild);
}
int main() {
    BST b;
    b.insert(1);
    b.insert(2);
    b.insert(4);
    b.insert(5);
    b.insert(3);

    cout << "Inorder Traversal: ";
    b.inorder(b.getroot());
    cout << endl;

    int keyToSearch = 2;
    node *result = b.search(keyToSearch);
    if(result)
        cout << keyToSearch << " is present in binary search tree " << endl;
    else
        cout << "Key is not present" << endl;

        int ans = b.countLeafNodes(b.getroot());
        cout<<"number of leaf nodes are : "<<ans<<endl;
    return 0;
}
