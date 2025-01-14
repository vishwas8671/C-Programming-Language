#include <stdio.h>
int main () {
  int num, sum=0;
  printf ("Enter value of number : ");
  scanf ("%d",&num);
  int copy = num;
  for (;num>0; num=num/10) {
    sum=sum+ num%10;
    
  }
    printf ("The sum of digits of %d is %d",copy,sum);
  return 0;
}