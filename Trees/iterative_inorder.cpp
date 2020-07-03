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

void inorder(struct node *root)
{
    stack<node *> s;
    node *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's left subtree */
            s.push(curr);
            curr = curr->left;
        }

        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->right;

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
 cout<<"In-Order traversal of the Binary Search Tree is: ";
  inorder(root);
  cout<<endl;
}
