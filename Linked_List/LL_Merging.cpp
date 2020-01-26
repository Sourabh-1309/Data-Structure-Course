#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

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

void create2(int a[],int n)   //separate Functions for creating 2nd LL
{
  struct Node *last,*t;
  second=new Node;
  second->data=a[0];
  second->next=NULL;
  last=second;
  for (int i = 1; i < n; ++i)
  {
    t=new Node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

void merge(struct Node *p,struct Node *q)
{
  struct Node *last;
  while(p!=NULL&&q!=NULL)
  {
    if(p->data<q->data)
    {
      third=last=p;
      p=p->next;
      last->next=NULL;
    }
   else
    {
      third=last=q;
      q=q->next;
      last->next=NULL;
    }
  }
  while(p&&q)
  {
      if(p->data<q->data)
      {
        last->next=p;
        last=p;
        p=p->next;
        last->next=NULL;
      }
      else
      {
        last->next=q;
        last=q;
        q=q->next;
        last->next=NULL;
      }
    }
  if(p)last->next=p;
  if(q)last->next=q;
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
  int n,n2,s;
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

    cout<<"\nEnter size of 2nd Linked List:";
    cin>>n2;
    int A2[n2];
    for(int i=0;i<n2;++i)
      {
        cout<<"Enter "<<i+1<<" element:";
        cin>>A2[i];
      }
    create2(A2,n2);
    display(second);
    merge(first,second);
    cout<<"\nThird LL is:";
    display(third);

}
