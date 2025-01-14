#include <stdio.h>
int main () {
  int num;
  printf ("Enter number : ");
  scanf ("%d",&num);

  int reverse = 0;
  for (int copy=num ;copy>0; copy=copy/10) {
    reverse= (reverse*10)+(copy%10);
  }
  printf ("The reverse of %d is %d",num, reverse);
  return 0;
}