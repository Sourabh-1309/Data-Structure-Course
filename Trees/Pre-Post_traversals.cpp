#include<iostream>
using namespace std;
struct node {
   int data;
   struct node *left;
   struct node *right;
};
struct node *createNode(int val) {
   struct node *temp =  new node;
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
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
struct node* insertNode(struct node* node, int val) {
   if (node == NULL) return createNode(val);
   if (val < node->data)
      node->left  = insertNode(node->left, val);
   else if (val > node->data)
      node->right = insertNode(node->right, val);
   return node;
}
int main() {
   struct node *root = NULL;
   root = insertNode(root, 4);
   insertNode(root, 5);
   insertNode(root, 2);
   insertNode(root, 9);
   insertNode(root, 1);
   insertNode(root, 3);
   cout<<"Pre-Order traversal of the Binary Search Tree is: ";
   preorder(root);
   cout<<endl;
   postorder(root);
   return 0;
}
