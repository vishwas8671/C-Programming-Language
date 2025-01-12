#include <stdio.h>

void swap(int, int);

int main () {
  int x, y;
  printf ("Enter two numbers : ");
  scanf ("%d %d", &x, &y);
  swap(x, y);
  printf ("\nAfter swapping the numbers are : %d and %d",x, y);
  return 0;
}

void swap(int first, int second) {
  printf ("First : %d, second : %d", first, second);
  int temp = first;
  first = second;
  second = temp;
  printf ("\nFirst : %d, second : %d", first, second);
}