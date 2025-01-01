#include <stdio.h>
int main () {
  int arr[7] = {1, 4, 2, 80, 191, 5, 12};
  int max = arr[0];
  for (int i=1; i<=7; i++) {
    if ( max < arr[i]) {
      max = arr[i];
    }
  }
  printf ("%d",max);
  return 0;
}