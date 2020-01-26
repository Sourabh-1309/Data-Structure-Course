#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
}*top=NULL;

void push(int x)
{ struct node*t=new node;
  if(t==NULL)
    cout<<"Overflow";
  else
    t->data=x;
    t->next=top;
  top=t;
}

int pop()
{ struct node *p;
  int x=-1;

  if(top==NULL)
    cout<<"Underflow";
  else
  {
    p=top;
    top=top->next;
    x=top->data;
    delete(p);
  }
  return x;
}


void display()
{struct node *p;
  p=top;
    while(p!=NULL)
    {
      cout<<p<<":"<<p->data<<endl;
      p=p->next;
    }
}
int main()
{ struct node *p;
  int e,size;
  cout<<"Enter the size of stack:";
  cin>>size;
  for (int i = 0; i < size; ++i)
  {
    cout<<"Enter element you want to inset in stack:";
    cin>>e;
    push(e);
  }
 display();
 cout<<"POP"<<endl;
 pop();
 display();
}
