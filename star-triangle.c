#include <stdio.h>
int main () {
  int n;
  printf ("Enter the number : ");
  scanf ("%d",&n);
  printf (" \n ");
  for (int i=1;i<=n;i++) {
    for (int j=1; j<=i; j++) {
    printf ("* ",j);
  }
  printf (" \n ");
  }
  return 0;

}