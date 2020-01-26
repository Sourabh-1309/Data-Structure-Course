#include<iostream>
using namespace std;
struct node
{
  char data;
  struct node *next;
}*top=NULL;

int isempty()
{
  if(top==NULL)
  return 1;
  else
  return 0;
}

void push(char x)
{
  struct node *t;
  if(t==NULL)
  cout<<"Stack is full";
  else
  {
    t=new node;
    t->data=x;
    t->next=NULL;
    top=t;
  }
}

char pop()
{
  struct node *t;
  char x=-1;
  if(top==NULL)
  cout<<"Stack is empty";
  else
  {
    t=top;
    top=top->next;
    x=t->data;
    delete(t);
  }
  return x;
}

int isbalance(string s)
{
  int count=0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='(')
    push(s[i]);
    else if(s[i]==')')
    {
      if(top==NULL)
      count++;
      else
      pop();
    }
  }
    while(!isempty())
    {
    pop();
    count++;
    }
    cout<<count;
}

int main()
{
  string s="()))(((";
  isbalance(s);
}
