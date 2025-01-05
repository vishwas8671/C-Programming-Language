#include <stdio.h>
int main () {
  int m, n;
  printf ("Enter the number of rows : ");
  scanf ("%d",&m);
  printf ("Enter the number of coloumns : ");
  scanf ("%d",&n);
  printf (" \n ");
  for (int i=1;i<=m;i++) {
    int a=65;
    for (int j=1; j<=i; j++) {
      if (n%2==0) {
        printf ("%c ",a);
      }
      else 
        ("%d ",j);
    
    a++;
  }
  printf (" \n ");
  }
  return 0;
}

// WRONG...