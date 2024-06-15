#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*lchild;
    struct node*rchild;
    int data;
}*root = NULL;
void insert(int key)
{
    struct node* t= root;
    struct node *r=NULL,*p;
    if(root == NULL){
    p = (struct node*)malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    root = p;
    }
    else{
      while(t)
      {
          r=t;
         if(key < t->data)
         t=t->lchild;
         else if(key > t->data)
         t=t->rchild;
         else
         return;
      }
      p = (struct node*)malloc(sizeof(struct node));
      p->data = key;
      p->lchild = p->rchild = NULL;
      if(key<r->data)
      r->lchild = p;
      else
      r->rchild = p;
  }
}
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}
int search(struct node* ptr,int key)
{
    //struct node* ptr = root;
    if(ptr->data == key)
    return 1;
    else if(ptr->data<key)
    search(ptr->rchild,key);
    else if(ptr->data>key)
    search(ptr->lchild,key);
else{
   return 0;
}
}
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    int x;
    scanf("%d",&x);
    insert(x);
}
  inorder(root);
  int x = search(root,5);
  if(x==1)
  printf("element is present\n");
  else
  printf("element is not present\n");
   return 0;
}