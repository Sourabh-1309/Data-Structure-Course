#include <bits/stdc++.h>
using namespace std;

struct Node
{
  struct Node *prev;
  int data;
  struct Node *next;
}*first=NULL;

void create(int a[],int n)
{
  struct Node *t,*last;
  first=new Node;
  first->data=a[0];
  first->prev=first->next=NULL;
  last=first;
  for (int i = 1; i < n; ++i)
  {
    t=new Node;
    t->data=a[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
  }
}

void display(struct Node *p)
{

  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}

void insert(struct Node *p,int pos,int x)
{
  struct Node *t;
  if(pos==0)
  {
    t=new Node;
    t->data=x;
    t->prev=NULL;
    t->next=first;
    first->prev=t;
    first=t;
  }
  else
  {
    for (int i = 0; i < pos-1; ++i) p=p->next;
    t=new Node;
    t->data=x;
    t->prev=p;
    t->next=p->next;
    if(p->next) p->next->prev=t;
    p->next=t;
  }
}

int main()
{
  int n,e,p;
  cout<<"Enter size of Linked List:";
  cin>>n;
  int A[n];
  for(int i=0;i<n;++i)
    {
      cout<<"Enter "<<i+1<<" element:";
      cin>>A[i];
    }
    create(A,n);
    display(first);
    cout<<"\nEnter the postion(o-n-1) and element you want to insert:\n";
    cin>>p>>e;
    insert(first,p,e);
    display(first);

}
