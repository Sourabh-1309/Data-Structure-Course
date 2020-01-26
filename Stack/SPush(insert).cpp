#include <bits/stdc++.h>
using namespace std;

struct stac{
  int size;
  int top;
  int *s;   //dynamically allocated array in heap
};

void push(struct stac *st, int x)
{
  if(st->top==st->size-1)
    cout<<"Overflow";
  else
    st->top++;
    st->s[st->top]=x;
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
}
