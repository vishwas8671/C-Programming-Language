#include <stdio.h>
#include <math.h>
int main () {
  int num1, num2;
  printf ("Enter first number : ");
  scanf ("%d",&num1);
  printf ("Enter second number : ");
  scanf ("%d",&num2);
  

  int min= num1>num2 ? num1 : num2;
  int max = num1*num2;
  for (int i=min; i<=max; i++) {
    if (i%num1==0 && i%num2==0) {
      printf ("The L.C.M. of %d and %d is %d",num1, num2,i);
      break;
    }
  }
  return 0;
}