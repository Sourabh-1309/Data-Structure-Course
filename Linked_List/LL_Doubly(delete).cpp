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

int del(struct Node *p,int pos)
{
  int x=-1;
  if(pos==1)
  {
    first=first->next=NULL;
      if(first) first->prev=NULL;
      x=p->data;
      delete p;
  }
  else
    { for (int i = 0; i < pos-1; ++i) p=p->next;
      p->prev->next=p->next;
      if(p->next) p->next->prev=p->prev;
      x=p->data;
      delete p;
  }
return x;
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
    cout<<"\nEnter the postion(1-n) you want to delete:\n";
    cin>>p;
    e=del(first,p);
    cout<<"Deleted element:"<<e<<endl;
    display(first);
}
