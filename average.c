#include <stdio.h>
float average (int a, int b, int c);

int main () {
  int a, b, c;
  printf ("Enter three numbers : ");
  scanf ("%d %d %d",&a, &b, &c);
  printf ("The value of %d %d and %d is : %.2f",a, b, c, average(a, b, c));
  return 0;
}

float average (int a, int b, int c) {
  float result = (float) (a+b+c)/3 ;
  return result;
}


