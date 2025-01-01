#include <stdio.h>
int main () {
  int r,c;
  printf ("Enter row value : ");
  scanf ("%d",&r);
  printf ("Enter coloumn value : ");
  scanf ("%d",&c);
  printf ( "\n" );
  int arr[r][c];
  if (r==c) {
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      scanf ("%d",&arr[i][j]); 
    }
  }
  printf ("\n");
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      printf ("%d ",arr[j][i]);
    }
    printf ( "\n" );
  }
  }
  else 
    printf ("Invalid matrix for transpose !\n ");

  return 0;
}