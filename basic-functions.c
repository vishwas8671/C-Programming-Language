#include <stdio.h>
void greet() {
  printf ("\nGood morning");
  printf ("\nHow are you ?");
  return;
}
int main () {
  // greet();
  // greet();
  // greet();
  // greet();
  for (int i=1;i<10;i++) {
    greet();
  }
  return 0;
}




