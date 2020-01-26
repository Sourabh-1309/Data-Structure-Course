#include <bits/stdc++.h>
using namespace std;

struct Node
 {
  int data;
  struct Node *next;
 }*first=NULL;

void create(int A[],int n)
{
  struct Node *t,*last;
  first=new Node;
  first->data=A[0];
  first->next=NULL;
  last=first;
  for (int i = 1; i < n; ++i)
  {
    t=new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void insert(struct Node *p,int x)
{struct Node *t,*q=NULL;
  t=new Node;
  t->data=x;
  t->next=NULL;
  if(first==NULL)
    {
      first=t;
    }
    else
    { while(p&&p->data<x)
        {
          q=p;
          p=p->next;
        }
      if(p==first)
      {
        t->next=first;
        first=t;
      }
      else
      {
        t->next=q->next;
        q->next=t;

      }

    }
}

void display(struct Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data;
    p=p->next;
  }
}

int main()
{
int n,e;
cin>>n;
int a[n];
for (int i = 0; i < n; ++i)
{
  cin>>a[i];
}
create(a,n);
display(first);
cout<<"Enter element you want to insert:";cin>>e;
insert(first,e);
display(first);

}
