#include <stdio.h>

int fact_using_loop(int);
int fact_using_recursion(int);

int main () {
  int res = fact_using_loop(4);
  printf ("Factorial using loop : %d", res);  
  return 0;
  int res2 = fact_using_recursion(5);
  printf ("Factorial using recursion : %d", res2);  
  return 0;
}

int fact_using_recursion(int num) {
  if (num==0) {
    return 1;
  }
  return num*fact_using_recursion(num-1);

}

int fact_using_loop(int num) {
  int result = 1;
  for (int i=2; i<=num; i++) {
    result *= i;
  }
  return result ;
}