#include <stdio.h>

void count_to_100();

int main () {
  count_to_100();
  
  return 0;
}

void count_to_100 () {
  for (int i=1;i<100;i++) {
    printf ("%d ",i);
  }
  int sum=0;
  for (int i=0; i<100; i++) {
    sum = sum + i;
  }
  printf ("\nThe sum is : %d", sum);
}
