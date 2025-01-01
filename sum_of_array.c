#include <stdio.h>
int main () {
  int n;
  printf ("Enter the size of array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n; i++) {
    printf ("Enter value of element number %d : ",i+1);
    scanf ("\n%d",&arr[i]);
  }
  int sum = 0;
  for (int i=0; i<=n-1; i++) {
    sum = sum + arr[i];
  }
  printf ("The sum of array is : %d",sum);
  return 0;
}