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

/*int count(struct Node *p)
   {  int c=0;
      while(p!=NULL)
      { c++;
       p=p->next;    }
   return c;
   }*/
int rcount(struct Node *p)
   {  int c=0;
      if(p!=NULL)
        return rcount(p->next)+c++;
    else return 0;
  }



int main()
{
   int A[]={3,5,7,10,25,8,32,2,8,9};
   create(A,10);
   cout<<"Total Number of Elements = "<<rcount(first);//sfirst is the pointer of struct Node
}
