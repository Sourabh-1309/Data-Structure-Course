#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
}*first=NULL;

void create(int a[],int n)
{
  struct Node *t, *last;
  first=new Node;
  first->data=a[0];
  first->next=NULL;
  last=first;
  for (int i = 1; i < n; ++i)
  {
    t=new Node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void remove(struct Node *p)
{
  p=first;
  struct Node *q=first->next;
  while(q!=NULL)
  {
    if(p->data!=q->data)
    {
     p=q;
     q=q->next;
    }
  else
    {
      p->next=q->next;
      delete q;
      q=p->next;
    }
}
}

void display(struct Node *p )
{
  while(p!=NULL)
    {cout<<p->data<<" ";
      p=p->next;
    }
}
int main()
{
  int n,s;
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
remove(first);
display(first);
}
