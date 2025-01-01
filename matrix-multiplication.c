#include <stdio.h>
int main () {
  int i, j, k, n, r1, c1, r2, c2, matrix1[5][5], matrix2[5][5], multiplication[5][5];
  printf ("Enter the number of rows and coloumns for matrix 1 : ");
  scanf ("%d %d",&r1, &c1);
  printf ("Enter the number of rows and coloumns for matrix 2 : ");
  scanf ("%d %d",&r2, &c2);
  if (r2!=c1) {
  printf ("Multiplication is not possible");
  }
else 
    printf ("Enter elements of matrix1[%d][%d] : ",r1, c1);
    for (i=0; i<r1; i++) {
      for (j=0; j<c1; j++) {
        scanf ("%d",&matrix1[i][j]);
      }
    }
    printf ("Enter elements of matrix2[%d][%d] : ",r2, c2);
      for (i=0; i<r2; i++) {
        for (j=0; j<c2; j++) {
          scanf ("%d",&matrix2[i][j]);
        }
      }
  for (i=0;i<r1;i++) {
    for (j=0; j<c2; j++) {
      multiplication[i][j]=0;
      for (k=0; k<r2; k++) {
        multiplication[i][j]=multiplication[i][j]+matrix1[i][j]*matrix2[i][j];
      }
    }
  }
  printf ("After multiplication the matrix is : \n");
  for (i=0; i<r1; i++) {
    for (j=0; j<c2; j++) {
      printf ("%d ",multiplication[i][j]);
    }
    printf ("\n");
  }
  return 0;
}