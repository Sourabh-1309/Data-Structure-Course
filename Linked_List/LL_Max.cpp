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
        for(i=1;i<n;i++)    {
            t=new Node;
            t->data=A[i];
            t->next=NULL;
            last->next=t;
            last=t;    } }
void Display(struct Node *p)
   {
      while(p!=NULL)
      {
       cout<<p->data;
       p=p->next;
      }
   }

   int max(struct Node *p)
   { int max=-327677;
      while(p!=NULL)
      {
        if(p->data>max)
          max=p->data;
        p=p->next;
      }
     return max;
   }
int rmax(struct Node *p)
   { int x=0;
      if(p==0)
        return 0;
      x=rmax(p->next);
      if(x>p->data)
        return x;
      else return p->data;
}


int main()
{
   int A[]={55,5,7,10,15,8,12,20};
   create(A,8);
   cout<<"Maximum Element is = "<<rmax(first);//sfirst is the pointer of struct Node
}
