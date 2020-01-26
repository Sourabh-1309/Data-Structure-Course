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
    display(head);
  }
