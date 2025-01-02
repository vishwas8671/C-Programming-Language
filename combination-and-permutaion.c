#include <stdio.h>
int main () {
  int n;
  printf ("Enter n : ");
  scanf ("%d",&n);
  int r;
  printf ("Enter r : ");
  scanf ("%d",&r);
  int nfact=1;
  int rfact=1;
  int nrfact=1;
  for (int i=2; i<=n; i++) {
    nfact=nfact*i;
  }
  for (int i=2; i<=n; i++) {
    rfact=rfact*i;
  }
  for (int i=2; i<=n; i++) {
    nrfact=nrfact*i;
  }
  int nCr= nfact/(rfact*n-rfact);
  printf ("The required value is : %d",nCr);
  return 0;
}