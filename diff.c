#include <stdio.h>
int main () {
  int i, n, x, diff;
  printf ("Enter the size of the array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n; i++) {
    printf ("Enter the element at index [%d] : ",i);
    scanf ("%d",&arr[i]);
  }
  int sum_even=0, sum_odd=0;
  for (int i=0; i<n; i++) {
    if (arr[i]%2 != 0) {
      sum_odd+=arr[i];
    }
    if (arr[i]%2 == 0) {
      sum_even+=arr[i];
      }
  }
  diff = sum_even - sum_odd;
  printf ("Required difference is : %d",diff);

  return 0;
  
}