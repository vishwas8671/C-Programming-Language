#include <stdio.h>
int main () {
  int n, x;
  printf ("Enter the size of the array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n; i++) {
    printf ("Enter element %d : ",i+1);
    scanf ("%d",&arr[i]);
  }
  printf ("Enter value of integer : ");
  scanf ("%d",&x);
  int count = 0;
  for (int i=0; i<n; i++) {
    if (arr[i]>x)
    count = count + 1;
  }
  printf ("Number of elements in array which are greater than %d is : %d",x, count);
  return 0;
}