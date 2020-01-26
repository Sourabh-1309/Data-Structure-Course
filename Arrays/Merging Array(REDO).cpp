#include<bits/stdc++.h>
using namespace std; int i;
struct Array
{   int *a;        //pointer taken for dynamic allocation ,
    int size;      // in heap, otherwise we could have taken a[10], if fixed
    int length; };

struct Array *merge(struct Array *ar,struct Array *ar1)
{
struct Array *arr3=new int[struct Array];
int i=0,j=0,k=0;
while(i<ar->length&&j<ar1->length)
  {
  if(ar->a[i]>ar1->a[i])
    arr3->a[k++]=ar->a[i++];
  else arr3->a[k++]=ar1->a[j++];
  }
  for (; i < ar->length; ++i)
   arr3->a[k++]=ar->a[i];
  for (; j < ar1->length; ++i)
   arr3->a[k++]=ar1->a[j];
    arr3->length=ar->length+ar1->length;
    arr3->size=ar->size+ar1->size;
    return arr3;
}


int main()
    { int i,index,e;
  struct Array arr;struct Array arr1;struct Array *arr2;
  cout<<"MERGING\nEnter size of 1st array:";
  cin>>arr.size;
  cout<<"MERGING\nEnter size of 2nd array:";
  cin>>arr1.size;
  arr1.a=new int[arr.size];
  arr.a=new int[arr.size]; /* its equal to a[size],but a is a pointer reffering
                        to first adrress of this array in heap */
  cout<<"Enter elements of 1st Array:";
  for(i=0;i<arr.size-1;++i)
    {
      cin>>arr.a[i];
    }
  cout<<"Enter elements of 2nd Array:";
  for(i=0;i<arr1.size-1;++i)
    {
      cin>>arr1.a[i];
    }
  arr.length=arr.size-1;
  arr1.length=arr1.size-1;
  arr2=merge(&arr,&arr1);

  cout<<"New Array After MERGING:";
  for(i=0;i<arr2.length;++i)
    {
      cin>>arr2.a[i];
    }
  }
