#include <stdio.h>
int main() {
    int n, i, key, low, high, mid, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements in ascending order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    printf("Enter the element to be searched : ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Entered element is found at index : %d", mid);
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (low > high) {
        printf("%d not found in the array\n", key);
    }
    return 0;
}
