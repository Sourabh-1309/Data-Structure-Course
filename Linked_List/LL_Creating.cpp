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

   /* void Display(struct Node *p) {
      while(p!=NULL)    {
       cout<<p->data    ;
       p=p->next;    }
    }*/

     void rdisplay(struct Node *p)
     {
        if(p!=NULL)
            {cout<<p->data<<endl;
                rdisplay(p->next);
            }
     }

int main()
{
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);
    rdisplay(first);
    return 0;
}
