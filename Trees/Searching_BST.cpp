#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
}*root=NULL;

struct node *createnode(int val){
  struct node *temp = new node;
  temp->data = val;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *insertnode(struct node *node, int val){
 if (node==NULL) return createnode(val);
 else if(val < node->data)
  node->left = insertnode(node->left, val);
 else if(val > node->data)
  node->right = insertnode(node->right, val);
 return node;
}

struct node * search(int key){
 struct node *t=root;
 while(t!=NULL)
 {
  if(key==t->data)
   return t;
  else if(key<t->data)
   t=t->left;
  else
   t=t->right;
 }
  return NULL;
}

int main(){
 int n,no,s,r;
 struct node *temp;
 struct node *root = NULL;
 cout<<"How many nodes you want to enter? ";
 cin>>no;
 cout<<"Enter the root element: ";
 cin>>r;
 root = insertnode(root, r);
 for(int i = 0; i < no - 1 ; ++i){
  cout<<"Enter the node: ";
  cin>>n;
  insertnode(root,n);
 }
 cout<<"Enter the node you want to search: ";
 cin>>s;
 temp=search(s);
 if(temp!=NULL)
  cout<<"Element found at "<<temp->data;
}

