#include <stdio.h>
float temp(int t);

int main () {
  int c;
  printf ("Enter temperature in celsius : ");
  scanf ("%d",&c);
  printf ("Temperature in farenhite is : %d",temp(c));
  
  return 0;
}

float temp(int f) {
  int c;
  f = (9/5)*c + 32;
  return f;

}