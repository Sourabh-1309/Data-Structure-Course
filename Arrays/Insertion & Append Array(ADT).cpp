#include<bits/stdc++.h>
using namespace std;
struct Array
{    int *a;/*pointer taken for dynamic allocation ,
            in heap, otherwise we could have taken a[10], if fixed */
    int size;
    int length;  };
  void append(struct Array *ar,int n) //function to insert element in the last of array
  {
  if(ar->length<=ar->size) ar->a[ar->length++]=n; /*inserting element at postion length,which is last position,length++_to increase length after insertion*/ }

int main()
{ int i;
  struct Array arr;
  cout<<"Enter the size of array";
  cin>>arr.size;
  arr.a=new int[arr.size]; /* its equal to a[size],but a is a pointer reffering
                        to first adrress of this array in heap */
  for(i=0;i<arr.size-1;++i)
    {
      cin>>arr.a[i];
    }
  cout<<"Before";
  for(i=0;i<arr.size-1;++i)
    {
      cout<<arr.a[i]<<endl;
    }
  arr.length=arr.size-1;
  append(&arr,10);
  cout<<"after";
    for(i=0;i<arr.size;++i)
      {
        cout<<arr.a[i]<<endl;
      }
}
