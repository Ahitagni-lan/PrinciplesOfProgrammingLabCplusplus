#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements of the first array
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Display the original array
    printf("Original Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    // Display the copied array
    printf("\nCopied Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}