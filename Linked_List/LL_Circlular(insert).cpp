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

void insert(struct Node *h,int pos,int x)
{ struct Node *t;
  if(pos==0)
  {
    t=new Node;
    t->data=x;
  h=head;
  while(h->next!=head) h=h->next;
  h->next=t;
  t->next=head;
  head=t;
 }
 else
 {
  for (int i = 0; i < pos-1; ++i)
    h=h->next;
   t=new Node;
   t->data=x;
   t->next=h->next;
   h->next=t;
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
    display(head);
    cout<<"Enter the postion(o-n-1) and element you want to insert:\n";
    cin>>p>>e;
    insert(head,p,e);
    display(head);
  }
