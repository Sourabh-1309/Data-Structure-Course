#include<bits/stdc++.h>
using namespace std;
struct Array
{    int *a;/*pointer taken for dynamic allocation ,
            in heap, otherwise we could have taken a[10], if fixed */
    int size;
    int length;  };
int lsearch(struct Array *ar,int e)
{ int i,temp;
  for(i=0;i<ar->length;++i)
  {
    if(ar->a[i]==e)
    {
      temp=ar->a[0];
      ar->a[0]=ar->a[i];
      ar->a[i]=temp;
      return i+1; break;
    }

  }return -1;
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
  arr.length=arr.size-1;
  cout<<"Enter element:";
  cin>>e;
  ls=lsearch(&arr,e);
  if(ls==-1) {cout<<"Element not found";}
  else
    {cout<<"Element found at postion "<<ls<<endl;
}cout<<"After moving the element in front: "<<endl;
    for(i=0;i<arr.length;++i)
      { if(arr.a[i]!=0)
        cout<<arr.a[i]<<endl;
      }
}
