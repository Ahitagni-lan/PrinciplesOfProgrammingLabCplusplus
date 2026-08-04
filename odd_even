#include <stdio.h>

// Function to process numbers and print the counts
void countOddEven(int totalNumbers) {
    int num, evenCount = 0, oddCount = 0;

    for (int i = 1; i <= totalNumbers; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nTotal Even numbers: %d\n", evenCount);
    printf("Total Odd numbers: %d\n", oddCount);
}

int main() {
    int n;
    printf("How many integers do you want to input? ");
    scanf("%d", &n);

    if (n > 0) {
        countOddEven(n);
    } else {
        printf("Please enter a valid number greater than 0.\n");
    }

    return 0;
}
