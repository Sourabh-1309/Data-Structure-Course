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
  for (int i = 1; i < n; ++i)
  {
    t=new Node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void rev(struct Node *p)//by links
{
struct Node *q,*r;
p=first;q=NULL;r=NULL;
while(p!=NULL)
{
  r=q;
  q=p;
  p=p->next;
  q->next=r;
}
  first=q;
}

void display(struct Node *p)
{
    while(p!=0)
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
cout<<"Elements of Linked List:\n";
display(first);
rev(first);
cout<<"\nElements of Linked List after reversing:\n";
display(first);
}
