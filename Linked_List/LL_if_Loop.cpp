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

int ifloop(struct Node *f)
{
  struct Node *q,*p;
  p=q=f;
  do
  {
    p=p->next;
    q=p->next;
    q=q!=NULL?q->next:NULL; //for moving ahead in ll, just like p=p->next
  }while(p&&q&&p!=q);//because if its loop its will not be null and end if p=q
if(p==q)
  return 1;
else return 0;
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
  int n,s;struct Node *t1,*t2;
  cout<<"Enter size of Linked List:";
  cin>>n;
  int A[n];
  for(int i=0;i<n;++i)
    {
      cout<<"Enter "<<i+1<<" element:";
      cin>>A[i];
    }
create(A,n);
 t1=first->next->next;
 t2=first->next->next->next->next;
 t2->next=t1;
//cout<<"Elements of Linked List:\n";
//display(first);
cout<<"\nLinked List is in loop or not:"<<ifloop(first);
}
