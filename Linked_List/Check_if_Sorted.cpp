#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
}*first=NULL;

void create(int a[],int n)
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

int ifsort(struct Node *p)
{ int x=-32768;//minimum number
  p=first;
  while(p!=NULL)
    {if(p->data<x) return 0;
    x=p->data;
    p=p->next;
    }
    return 1;
}
void display(struct Node *p)
{
  while(p!=NULL)
  {
    cout<<p->data<<" ";
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
s=ifsort(first);
if(s==1)
cout<<"\nSorted List";
else cout<<"\nNot sorted";
}
