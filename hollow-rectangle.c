#include <stdio.h>
int main () {
  int m, n;
  printf ("Enter the number of rows : ");
  scanf ("%d",&m);
  printf ("Enter the number of coloumns : ");
  scanf ("%d",&n);
  printf (" \n ");
  for (int i=1; i<=m; i++) {
    for (int j=1; j<=n; j++) {
      if (i==1&4 || j==1&4) {
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

// WRONG...