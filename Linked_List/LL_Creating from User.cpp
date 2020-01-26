#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

    void create(int A[],int n)
    {
        int i;
        struct Node *t,*last;
        first=new Node;
        first->data=A[0];
        first->next=NULL;
        last=first;
        for(i=1;i<n;i++)
        {
            t=new Node;
            t->data=A[i];
            t->next=NULL;
            last->next=t;
            last=t;
          }
    }
    void insert(struct Node *p,int pos,int x)
{
  struct Node *t;

  if(pos==0)
  { t=new Node;
    t->data=x;
    t->next=first;
    first=t;
  }

  else if(pos>0)
  {
    for(int i=0;i<pos-1;++i)
    p=p->next;
    t=new Node;
    t->data=x;
    t->next=p->next;
    p->next=t;
  }
}

    void Display(struct Node *p) {
      while(p!=NULL)
      { cout<<"Element at adress "<<p<<" is:";
       cout<<p->data<<endl;    ;
       p=p->next;    }
    }



int main()
{
    int n,pos,e;
    cout<<"Enter the size of Linked List:";
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i)
    {
      cout<<"Enter "<<i+1<<" element:";
      cin>>A[i];
    }
    create(A,n);
    cout<<"Enter the postion you want to insert:";cin>>pos;
cout<<"Enter the element you want to insert:";cin>>e;
insert(first,pos,e);
    Display(first);
    return 0;
}
