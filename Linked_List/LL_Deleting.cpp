#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node * next;
}*first=NULL;

void create(int a[], int n)
{
  struct Node *last,*t;
  first=new Node;
  first->data=a[0];
  first->next=NULL;
  last=first;
  for(int i=1;i<n;++i)
  {
    t=new Node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

int delet(struct Node *p,int pos)
{ int i=0,x;
  p=first;
  if(pos==1)
  {
      first=first->next;
      x=p->data;
      delete p;
  }
  else
  { struct Node *p=first;
    struct Node *q=NULL;
    for (i = 0; i < pos-1 && p; ++i)
    {
      q=p;
      p=p->next;
    }
    if(p)
    {q->next=p->next;
    x=p->data;
    delete p;
    }
  }
return x;
}


void display(struct Node *p)
{
  while(p!=0)
  {
    cout<<p->data;
    p=p->next;
  }
}

int main()
{
  int n,pos,e;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  create(a,n);
  display(first);
  cout<<"Enter the postion you want to delete(1-n)";cin>>pos;
  e=delet(first,pos);
  cout<<"deleted element is"<<e<<endl;
  display(first);
}


