#include <stdio.h>
int add(int a, int b) {
  return a+b;
}
int main () {
  int a, b;
  printf ("Enter first number : ");
  scanf ("%d",&a);
  printf ("Enter second number : ");
  scanf ("%d",&b);
  int sum = add(a,b);
  printf ("Sum of %d and %d is : %d",a,b,sum);
  return 0;
}



