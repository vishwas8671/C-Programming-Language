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
  int count_even=0, count_odd=0;
  for (int i=0; i<n; i++) {
    if (arr[i]%2 != 0) {
      count_odd+=1;
    }
    if (arr[i]%2 == 0) {
      count_even+=1;
      }
  }
  diff = count_even - count_odd;
  printf ("Required difference is : %d",diff);

  return 0;
  
}