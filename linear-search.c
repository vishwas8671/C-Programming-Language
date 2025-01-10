#include <stdio.h>
int main() {
    int n, x, i, found = 0, arr[100];
    printf ("Enter the size of the array : ");
    scanf ("%d",&n);
    printf ("Enter the elements of the array : ");
    for (i=0; i<n; i++) {
        scanf ("%d",&arr[i]);
    }
    printf ("Enter the element to be searched : ");
    scanf ("%d",&x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            printf("Entered element is found at index %d.",i);
            break;
        }
    }
    if (found==0) {
        printf("Entered element is not found in the array.");
    }
    return 0;
}