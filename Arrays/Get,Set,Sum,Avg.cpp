#include<bits/stdc++.h>
using namespace std; int i;
struct Array
{   int *a;        //pointer taken for dynamic allocation ,
    int size;      // in heap, otherwise we could have taken a[10], if fixed
    int length; };

    int get(struct Array ar,int ind)
    {
      if(ind>=0 && ind<=ar.length)
        return ar.a[ind];
      return -1;
    }
    /* void set(struct Array *ar,int ind,int x)
    {
      if(ind>=0 && ind<=ar->length)
        ar->a[ind]=x;

    }*/
     int max(struct Array ar)
    {
      int max=ar.a[0];
      for (int i = 0; i < ar.length; ++i)
      {
       if(ar.a[i]>max) max=ar.a[i];
      }return max;
    }
  int sum(struct Array ar)
    { int s=0;
      for (i = 0; i < ar.length; ++i)
      {
      s=s+ar.a[i];
      } return s;
    }
  int avg(struct Array ar)
    {
      return  (float)sum(ar)/ar.length;
    }

    int main()
{ int i,e,ls;
  struct Array arr;
  cout<<"Enter the size of array:";
  cin>>arr.size;
  arr.a=new int[arr.size]; /* its equal to a[size],but a is a pointer reffering
                        to first adrress of this array in heap */

  for(i=0;i<arr.size-1;++i)
    {
      cin>>arr.a[i];
    }
  arr.length=arr.size;
  cout<<"Operations\n";
  cout<<"Get 1st element "<<get(arr,0)<<endl;
  //cout<<"Set 1st element "<<set(&arr,0,2)<<endl;
  cout<<"Sum "<<sum(arr)<<endl;
  cout<<"avg of element "<<avg(arr)<<endl;
}
