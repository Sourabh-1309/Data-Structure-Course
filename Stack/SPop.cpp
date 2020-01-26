#include <bits/stdc++.h>
using namespace std;

struct stac{
  int size;
  int top;
  int *s; //dynamically allocate array
};

void push(struct stac *st,int x)
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
{ int x=-1;
  if(st->top==-1)
    cout<<"Underflow";
  else
  {
    x=st->s[st->top];
    st->top--;
  }
  return x;
}

int main()
{
  struct stac st;
  int e;
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
  for (int i = 0; i <= st.top; ++i)
  {
    cout<<st.s[i]<<endl;
  }
}
