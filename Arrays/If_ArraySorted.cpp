#include<bits/stdc++.h>
using namespace std; int i;
struct Array
{   int *a;        //pointer taken for dynamic allocation ,
    int size;      // in heap, otherwise we could have taken a[10], if fixed
    int length; };


int ifsort(struct Array *ar)
{
  for(i=0;i<ar->length;++i)
  {
    if(ar->a[i]>ar->a[i+1])
   { return -1;
      break;
   }
 }return 0;
}
void insert(struct Array *ar,int e)
{
  int i=ar->length-1;
  while(e<ar->a[i])
  {
    ar->a[i+1]=ar->a[i];
    --i;
  }ar->a[i+1]=e;
}
void re(struct Array *ar)
{int temp;
  int i=0,j=ar->length-1;
  while(ar->a[i]<0){++i;}
  while(ar->a[j]>0) {--j;}
  if(i<j)
    temp=ar->a[i];
  ar->a[i]=ar->a[j];
  ar->a[j]=temp;
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
  if(ifsort(&arr)==0)
    {cout<<"Array is sorted, you can insert element in this array";
      cout<<"\nElement:";cin>>e;
      insert(&arr,e);
      for (int i = 0; i < arr.size; ++i)
      {
        cout<<arr.a[i]<<endl;
      }
    }
    struct Array arr1;
    cout<<"Enter the size of array 2nd:";
  cin>>arr1.size;
  arr1.a=new int[arr.size]; /* its equal to a[size],but a is a pointer reffering
                        to first adrress of this array in heap */

  for(i=0;i<arr1.size-1;++i)
    {
      cin>>arr1.a[i];
    }
  arr1.length=arr1.size-1;
re(&arr1);
for (int i = 0; i < arr1.length; ++i)
      {
        cout<<arr1.a[i]<<endl;
      }
}
