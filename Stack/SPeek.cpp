#include <bits/stdc++.h>
using namespace std;

struct stac{
  int size;
  int top;
  int *s;
};

void push(struct stac  *st,int x)
{
  if(st->top==st->size-1)
    cout<<"Overflow";
  else
  {
   st->top++;
    st->s[st->top]=x;
  }
}

int pop(struct stac *st)
{int x=-1;
  if(st->top==-1)
    cout<<"Underflow";
  else
  {
    x=st->s[st->top];
    st->top--;
  }
  return x;
}

int peek(struct stac *st, int pos)
{
  int x=-1;
  if(st->top-pos+1<0)
    cout<<"Invalid position";
  else
    x=st->s[st->top-pos+1];
  return x;
}

int main()
{
  struct stac st;
  int e,pos;
  cout<<"Enter the size of stack:";
  cin>>st.size;
  st.s=new int[st.size];
  st.top=-1;
  for (int i = 0; i < st.size; ++i)
  {
    cout<<"Enter element you want to inset in stack:";
    cin>>e;
    push(&st,e);
  }
  for (int i = 0; i < st.size; ++i)
  {
    cout<<st.s[i]<<endl;
  }
  pop(&st);
  cout<<"POP"<<endl;
  for (int i = st.top; i >= 0; --i)
  {
    cout<<st.s[i]<<endl;
  }
  cout<<"Enter pos you want to find(0-n-1) and top to btm:";
  cin>>pos;
  cout<<peek(&st,pos);
}
