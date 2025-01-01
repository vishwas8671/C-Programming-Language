#include <stdio.h>
int main () {
  int i, n, x, totalPairs=0;
  printf ("Enter the size of the array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n; i++) {
    printf ("Enter the element at index [%d] : ",i);
    scanf ("%d",&arr[i]);
  }
  printf ("Enter the value of integer : ");
  scanf ("%d",&x);
  printf ("Required pair is : ");
  for (int i=0; i<=n; i++) {
    for (int j=i+1; j<=n; j++) {
      if (arr[i]+arr[j]==x) {
        totalPairs ++;
        
        printf ("(%d, %d)",arr[i], arr[j]);
      }
    }
  }
  printf ("\nNumber of pairs whose sum is %d are : %d", x, totalPairs);
  return 0;
}