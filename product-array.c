#include <stdio.h>
int main () {
  int n;
  printf ("Enter the size of array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n;i++) {
    printf ("Enter value of element number %d : ",i+1);
    scanf ("\n%d",&arr[i]);
  }
  int product = 1;
  for (int i=0; i<=n-1; i++) {
    product = product * arr[i];
  }
  printf ("The sum of array is %d",product);
  return 0;
}