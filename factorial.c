#include <stdio.h>
int main () {
  int num;
  int fact ;
  printf ("enter a positive integer : ");
  scanf ("%d", &num);

  for (int i = 1; i<=num; ++i) {
    fact=fact*i;

    printf ("Factorial of %d is %llu\n",num, fact);

    return 0;
  }
}