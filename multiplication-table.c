#include <stdio.h>
int main () {
  int n;
  printf ("Enter value for printing table : ");
  scanf ("%d",&n);
  for (int i=1; i<=10; i++) {
    printf ("%d X %d = %d\n", n, i, n*i);
  }
  return 0;
}