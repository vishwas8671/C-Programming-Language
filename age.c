#include <stdio.h>

int main () {
  int age;
  printf ("Enter your age : ");
  scanf ("%d", &age);

  if (age < 18) {
    printf ("You are too young, please apply after you are 18.\n");
    }  else if (age > 18) 
    printf ("You are senior, you can not apply anymore.\n");
    else 
    printf ("You are eligible for a license.\n");
  

  printf ("Youe age is : %d", age);
  return 0;
}