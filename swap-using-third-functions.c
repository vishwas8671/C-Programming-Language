#include <stdio.h>
void swap(int a, int b);


int main () {
  int a;
  printf ("Enter a : ");
  scanf ("%d",&a);
  int b;
  printf ("Enter b : ");
  scanf ("%d",&b);
  swap(a, b);
  printf ("The value of a is : %d",a);
  printf ("\nThe value of b is : %d",b);
  return 0;
}


void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  return;
}

