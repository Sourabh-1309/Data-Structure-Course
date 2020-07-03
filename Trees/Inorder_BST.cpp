#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
};

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

void preorder(struct node *root) {
   if (root != NULL) {
      cout<<root->data<<" ";
      preorder(root->left);
      preorder(root->right);
   }
}
void postorder(struct node *root) {
   if (root != NULL) {
      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<" ";
   }
}

void inorder(struct node *root) {
   if (root != NULL) {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
   }
}

int main(){
 int n,no,r;
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
 cout<<"Pre-Order traversal of the Binary Search Tree is: ";
  preorder(root);
  cout<<endl;
 cout<<"Post-oder traversal of the Binary Search Tree is:  ";
  postorder(root);
  cout<<endl;
 cout<<"In-Order traversal of the Binary Search Tree is: ";
  inorder(root);
}
