#include <stdio.h>
#include <string.h>

int main () {
  char str[] = "college wallah";
  char* ptr = &str[0];
  printf("%p",ptr);

  
  return 0;
}