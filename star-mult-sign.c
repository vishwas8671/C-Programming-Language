#include <stdio.h>
int main () {
  int i, j, n;
  printf ("Enter the number of rows : ");
  scanf ("%d",&n);
  printf (" \n ");
  for (i=1; i<=n; i++) {
    for (j=1; j<=n; j++) {
      if (i==j || i==n+1-j) {
        printf ("* ");
      }
      else {
        printf ("  ");
      }
    }
    printf (" \n ");
  }
  return 0;
}