#include<bits/stdc++.h>
//using namespace std;brings all the names from <algorithm> which also has a function called count,
//and in your code, you've declared a variable count
static int count = 0;

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

int countnodes(struct node *root){
  if(root != NULL)
  {
   countnodes(root->left);
   ++count;
   countnodes(root->right);
  }
  return count;
}

int main(){
 int n,no,r;
 struct node *root = NULL;
 std::cout<<"How many nodes you want to enter? ";
 std::cin>>no;
 std::cout<<"Enter the root element: ";
 std::cin>>r;
 root = insertnode(root, r);
 for(int i = 0; i < no - 1 ; ++i){
  std::cout<<"Enter the node: ";
  std::cin>>n;
  insertnode(root,n);
 }
 std::cout<<"Nodes of the Binary Search Tree: "<<countnodes(root);
}
