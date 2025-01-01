// Given an array of integers , change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include <stdio.h>
int main () {
  int n, i;
  printf ("Enter the size of the array : ");
  scanf ("%d",&n);
  int arr[n];
  for (int i=0; i<n; i++) {
  printf ("Enter element %d : ",i+1);
  scanf ("%d",&arr[i]); 
  }
  for (int i=0; i<n; i++) {
    if (i%2 != 0) {
    arr[i]=arr[i]*2;
    } else { (arr[i]=arr[i]+10);}
  }
  for (int i=0; i<n; i++) {
  printf ("%d ",arr[i]); }
  return 0;
}