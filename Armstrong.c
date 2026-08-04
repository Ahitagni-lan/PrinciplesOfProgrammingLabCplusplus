#include <stdio.h>

// Helper function to calculate power
int calculatePower(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
void checkArmstrong(int num) {
    int originalNum = num, remainder, result = 0, digits = 0;

    // Count number of digits
    for (int temp = num; temp != 0; digits++) {
        temp /= 10;
    }

    // Calculate sum of digits raised to power of digit count
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += calculatePower(remainder, digits);
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}

int main() {
    int n;
    printf("Enter an integer to check if it is an Armstrong number: ");
    scanf("%d", &n);

    checkArmstrong(n);

    return 0;
}
