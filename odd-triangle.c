#include <stdio.h>
int main () {
  int n;
  printf ("Enter value : ");
  scanf ("%d",&n);
  printf (" \n ");
  for (int i=1; i<=2*n-1;i=i+2) {
    for (int j=1; j<=i; j=j+2) {
    printf ("%d ",j);
  }
  printf (" \n ");
  }
  return 0;
}