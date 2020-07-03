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

void printGivenLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

int height(node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
}


void printLevelOrder(node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printGivenLevel(root, i);
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
 cout<<"Level-Order traversal of the Binary Search Tree is: ";
  printLevelOrder(root);
  cout<<endl;
}
