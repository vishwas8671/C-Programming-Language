#include <stdio.h>
#include <math.h>
int main () {
  int a, b;
  printf ("Enter number : ");
  scanf ("%d %d",&a, &b);
  int q = pow(a,b);
  printf ("The power is : %d",q);
  return 0;
}