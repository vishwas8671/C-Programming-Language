#include <stdio.h>
int main () {
  int i=72;
  int* j = &i;
  int k = 67;
  printf("The address of i is : %p\n",&i);
  printf("The address of i is : %p\n",j);
  printf("The address of k is : %p\n",k);
  printf("The value at address j is : %d\n",*j);
  printf("The value at address j is : %d\n");
  return 0;
}