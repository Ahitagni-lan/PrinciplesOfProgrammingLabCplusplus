#include <stdio.h>

int main() {
    int arr[100], n, i, j, count = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count duplicate elements
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;   // Avoid counting the same element more than once
            }
        }
    }

    // Display result
    printf("Total number of duplicate elements = %d\n", count);

    return 0;
}