#include <stdio.h>
int main () {
  int i, j, r1 ,c1, r2, c2;
  printf ("For matrix A - \n ");
  printf ("Enter row value : ");
  scanf ("%d",&r1);
  printf ("Enter coloumn value : ");
  scanf ("%d",&c1);
  int res[i][j];
  int arr[r1][c1];
  for (int i=0; i<r1; i++) {
    for (int j=0; j<c1; j++) {
      scanf ("%d",&arr[i][j]);  
    }
  }
  printf ("For matrix B - \n ");
  printf ("Enter row value : ");
  scanf ("%d",&r2);
  printf ("Enter coloumn value : ");
  scanf ("%d",&c2);
  int brr[r2][c2];
  for (int i=0; i<r2; i++) {
    for (int j=0; j<c2; j++) {
      scanf ("%d",&brr[i][j]);
    }
  }

  printf (" \n ");
  for (int i=0; i<r1; i++) {
    for (int j=0; j<c1; j++) {
      res[i][j]=arr[i][j] + brr[i][j];
    }
    printf (" \n ");
  }
  for (int i=0; i<r1; i++) {
    for (int j=0; j<c1; j++) {
      printf ("%d   ",res[i][j]);
    }
    printf (" \n ");
  }
  return 0;
}