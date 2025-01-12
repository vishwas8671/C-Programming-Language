#include <stdio.h>
#include <conio.h>
int main ()
{
  clrscr ();
  float length, breadth, perimeter ;
  
  printf ("Enter lengrh of rectangle : ");
  scanf ("%f", &length);
  printf ("Enter breadth : ");
  scanf ("%f", &breadth);
  perimeter = length + length + breadth + breadth;
  printf ("The perimeter of rectangle is : %f", perimeter);
  return 0 ;
}