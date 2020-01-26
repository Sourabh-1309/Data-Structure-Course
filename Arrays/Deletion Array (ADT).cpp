#include<bits/stdc++.h>
using namespace std;
struct Array
{    int *a;/*pointer taken for dynamic allocation ,
            in heap, otherwise we could have taken a[10], if fixed */
    int size;
    int length;  };

    int delet(struct Array *ar,int ind)
    { int i,x;
      x=ar->a[ind-1];
      if(ind<=ar->size && ar->length<ar->size && ind>=0)
        for(i=ind-1;i<ar->length;++i)
        ar->a[i]=ar->a[i+1];
      ar->length--;
        return x;
    }
    int main()
{ int i,e,pos,del;
  struct Array arr;
  cout<<"Enter the size of array:";
  cin>>arr.size;
  arr.a=new int[arr.size]; /* its equal to a[size],but a is a pointer reffering
                        to first adrress of this array in heap */

  for(i=0;i<arr.size-1;++i)
    {
      cin>>arr.a[i];
    }
  cout<<"Before insertion:"<<endl;
  for(i=0;i<arr.size-1;++i)
    {
      cout<<arr.a[i]<<endl;
    }
  arr.length=arr.size-1;
  cout<<"Enter postion:";
  cin>>pos;
  del=delet(&arr,pos);

  cout<<"After deletion at postion "<<pos<<" element "<<del<<endl;
    for(i=0;i<arr.length;++i)
      { if(arr.a[i]!=0)
        cout<<arr.a[i]<<endl;
      }
}
