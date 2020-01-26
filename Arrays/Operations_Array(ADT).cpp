#include<bits/stdc++.h>
using namespace std; int i;
struct Array
{   int *a;        //pointer taken for dynamic allocation ,
    int size;      // in heap, otherwise we could have taken a[10], if fixed
    int length; };
    int sum(struct Array ar)
    {
      int i, s=0;
      for(i=0;i<=ar.length;++i)
      {
        s=s+ar.a[i];
      }
      return s;
    }
     float avg(struct Array ar)
    {
      return (float)sum(ar)/ar.length;
    }
    int max(struct Array ar)
    {
      int i, max=ar.a[0];
      for(i=0;i<=ar.length;++i)
      {
        if(ar.a[i]>max) max=ar.a[i];
      }
      return max;
    }
    int get(struct Array ar,int ind)
    { if(ind>=0 && ind<=ar.length)
        return ar.a[ind];
    }
    void Set(struct Array *ar,int ind,int e)
    { if(ind>=0 && ind<=ar->length)
        ar->a[ind]=e;
    }
  int main()
{ int i,index,e;
  struct Array arr;
  cout<<"Enter the size of array:";
  cin>>arr.size;
  arr.a=new int[arr.size]; /* its equal to a[size],but a is a pointer reffering
                        to first adrress of this array in heap */

  for(i=0;i<arr.size-1;++i)
    {
      cin>>arr.a[i];
    }
  arr.length=arr.size-1;
  cout<<"sum:"<<sum(arr)<<endl;
  cout<<"avg:"<<avg(arr)<<endl;
  cout<<"max:"<<max(arr)<<endl;
  cout<<"Get: Enter index "; cin>>index;
  cout<<"Element at index "<<index<<" = "<<get(arr,index)<<endl;;
  cout<<"Set: Enter index and Element "; cin>>index>>e;
  Set(&arr,index,e);
  cout<<"Array after Set operation:"<<endl;
  for (int i = 0; i < arr.length; ++i)
  {
    cout<<arr.a[i]<<endl;
  }

}
