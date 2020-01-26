#include<stdio.h>
struct Array {
int A[10];
int size;
int length; };

int main()
{
  struct Array arr;
  printf("Enter the size of Array" );
  scanf("%d",&arr.size);
  printf("%d",arr.size );
}
