#include <stdio.h>
int main () {
  int num, sum=0;
  printf ("Enter value of number : ");
  scanf ("%d",&num);

  for (int i=1; i<=num; i=i+2) {
    sum=sum+i;
  }
  printf ("The sum of all odd numbers from 1 to %d is : %d",num,sum);
  return 0;
}