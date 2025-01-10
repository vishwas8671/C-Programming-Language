#include <stdio.h>
int main () {
    int n, i, j, temp, arr[100];
    printf ("Enter the size of the array : ");
    scanf ("%d",&n);
    printf ("Enter the elements of the array : ");
    for (i=0; i<n; i++) {
        scanf ("%d",&arr[i]);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n-1; j++) {
            if (arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf ("After bubble sort the array is : ");
    for (i=0; i<n; i++) {
        printf ("%d ",arr[i]);
    }
    return 0;
}