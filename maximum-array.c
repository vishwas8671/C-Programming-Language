#include <stdio.h>
int main () {
  int n;
  printf ("Enter the value of array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n; i++) {
    printf ("Enter the value of element %d of array : ",i+1);
    scanf ("%d",&arr[n]);
  }
  int max = -1;
  for (int i=0; i<=n; i++) {
    if (max<arr[i]) {
      max = arr[i];
    }
  }
  printf ("The maximum value of element of array is : %d",max);
  return 0;
}