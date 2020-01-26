#include<bits/stdc++.h>
using namespace std;
struct Array
{    int *a;/*pointer taken for dynamic allocation ,
            in heap, otherwise we could have taken a[10], if fixed */
    int size;
    int length;  };
int bsearch(struct Array *ar,int e)
{ int i,temp;
  int l=0;
  int h=ar->length;
  int mid=ar->a[(l+h)/2];
  while(l<h)
  {
    mid=((l+h)/2);
    if(e==ar->a[mid])
      {return mid;break;}
    else if(ar->a[mid]<e)
      l=mid+1;
    else h=mid-1;
  }
  return -1;
}

int main()
{ int i,e,bs;
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
  cout<<"Enter element:";
  cin>>e;
  sort(arr.a,arr.a+1);
  bs=bsearch(&arr,e);
  if(bs==-1) {cout<<"Element not found";}
  else
    cout<<"Element found at postion "<<bs<<endl;

}
