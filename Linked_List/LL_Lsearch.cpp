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
struct Node * lsearh(struct Node *p,int key)
   {
       while(p!=NULL)
      {
        if(p->data==key)
          return p;
        p=p->next;
      }
      return NULL;

    }
struct Node * rsearh(struct Node *p,int key)
   {
       if(p==NULL) return NULL;
       if(p->data==key) return p;
       else return rsearh(p->next,key);

    }


int main()
{ struct Node *Temp;
   int A[]={55,5,7,10,15,8,12,20};
   create(A,8);
   Temp=rsearh(first,5);
   if (Temp==NULL)
   cout<<"Element not found.";
  else cout<<"Key Found at position "<<Temp;
}
