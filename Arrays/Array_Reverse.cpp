#include<bits/stdc++.h>
using namespace std; int i;
struct Array
{   int *a;        //pointer taken for dynamic allocation ,
    int size;      // in heap, otherwise we could have taken a[10], if fixed
    int length; };

void rev2(struct Array *ar)
{
  int i,j,temp;
  for(i=0,j=ar->length-1;i<j;++i,--j)
  {
    temp=ar->a[i];
    ar->a[i]=ar->a[j];
    ar->a[j]=temp;
  }
}
void rev(struct Array *ar)
{ int *b;
b=new int[ar->length];int i,j;
  for(i=ar->length-1,j=0;i>=0;++j,--i)
    b[j]=ar->a[i];
  for(i=0;i<=ar->length;++i)
    ar->a[i]=b[i];
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
    rev(&arr);
  cout<<"After Rev 1:"<<endl;
  for(i=0;i<arr.length;++i)
    {
      cout<<arr.a[i]<<endl;
    }
    rev2(&arr);
    cout<<"After Rev 2:"<<endl;
  for(i=0;i<arr.length;++i)
    {
      cout<<arr.a[i]<<endl;
    }
}
