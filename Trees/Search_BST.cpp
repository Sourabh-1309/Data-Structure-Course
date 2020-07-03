#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
}*root = NULL;

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

void Search(node *root, int d) {
   int depth = 0;
   node *temp = new node;
   temp = root;
   while(temp != NULL) {
      depth++;
      if(temp->data == d) {
         cout<<"\nitem found at depth: "<<depth;
         return;
      } else if(temp->data > d)
         temp = temp->left;
         else
            temp = temp->right;
   }
   cout<<"\n item not found";
   return;
}

int main(){
 int n,no,r,s;
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
cout<<"\nEnter the Element to be searched: ";
   cin>>s;
   Search(root, n);
}
