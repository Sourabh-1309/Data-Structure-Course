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

/*int sum(struct Node *p)
   {  int s=0;
      while(p!=NULL)
      {
       s+=p->data;
       p=p->next;   }
   return s;
   }*/
   int rsum(struct Node *p)
   {
      if(p!=NULL)
      return rsum(p->next)+p->data;
    else return 0;
   }



int main()
{
   int A[]={3,5,7,10,15,8,12,20};
   create(A,8);
   cout<<"Total Sum of Elements = "<<rsum(first);//sfirst is the pointer of struct Node
}
