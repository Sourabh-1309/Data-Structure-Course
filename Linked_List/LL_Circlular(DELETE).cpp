#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
}*head;

void create(int a[],int n)
{
  struct Node *t,*last;
  head=new Node;
  head->data=a[0];
  head->next=head;
  last=head;
  for (int i = 1; i < n ; ++i)
  {
    t=new Node;
    t->data=a[i];
    t->next=last->next;
    last->next=t;
    last=t;
  }
}
void display(struct Node *h)
{
  do
  {
    cout<<h->data<<" ";
    h=h->next;
  }while(h!=head);
  cout<<endl;
}

int del(struct Node *p,int pos)
{ struct Node *q; int x;
  if(pos==1)
  {  while(p->next!=head)p=p->next;
    x=head->data;
    if(head==p)
      {
        delete head;
        head=NULL;
      }
      else
      {
        p->next=head->next;
        delete head;
        head=p->next;
      }
  }
  else
  {
    for (int i = 0; i < pos-2; ++i) p=p->next;
      q=p->next;
      p->next=q->next;
      x=q->data;
      delete q;
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
    display(head);
    cout<<"Enter the postion(o-n-1) you want to delete:\n";
    cin>>p;
    e=del(head,p);
   // cout<<"The element deleted is "<<e;
    display(head);
  }
