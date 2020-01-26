#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
}*front=NULL,*rear=NULL;

void enq(int x)
{
  struct node*t=new node;
  if(t==NULL)
    cout<<"Queue is full";
  else
    t->data=x;
    t->next=NULL;
    if(front==NULL) front=rear=t;
    else
      rear->next=t;
    rear=t;
}

int deq()
{
  int x=-1;
  struct node *p;
  if(front==NULL)
    cout<<"Empty";
  else
  {
    x=front->data;
    p=front;
    front=front->next;
    delete(p);
  }
return x;
}

void display()
{struct node *p;
  p=front;
    while(p!=NULL)
    {
      cout<<p<<":"<<p->data<<endl;
      p=p->next;
    }
}

int main()
{
  enq(10);
  enq(20);
  display();
  cout<<"After\n";
  deq();
  display();

}
