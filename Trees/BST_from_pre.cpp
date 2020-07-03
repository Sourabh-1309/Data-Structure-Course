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

node* constructTree ( int pre[], int size ) {
   stack<node*> stk;
   node* root = createnode( pre[0] );
   stk.push(root);
   int i;
   node* temp;
   for ( i = 1; i < size; ++i ) {
      temp = NULL;
      while ( !stk.empty() && pre[i] > stk.top()->data ) {
         temp = stk.top();
         stk.pop();
      }
      if ( temp != NULL) {
         temp->right = createnode( pre[i] );
         stk.push(temp->right);
      } else {
         node* peek_node = stk.top();
         peek_node->left = createnode( pre[i] );
         stk.push(stk.top()->left);
      }
   }
   return root;
}

void inorder(struct node *root) {
   if (root != NULL) {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
   }
}

int main(){
 int n;
 cout<<"Enter the number of nodes";
 cin>>n;
 int pre[n];
 for(int i = 0; i < n; ++i)
  cin>>pre[i];
 int size = sizeof( pre ) / sizeof( pre[0] );
 node *root = constructTree(pre, size);
 cout << "Inorder traversal: ";
 inorder(root);
}
