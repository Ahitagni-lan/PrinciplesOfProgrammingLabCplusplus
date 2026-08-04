#include <stdio.h>

// Function to check if a single number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to find and print primes in a given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int startRange, endRange;
    printf("Enter the starting number of the range: ");
    scanf("%d", &startRange);
    printf("Enter the ending number of the range: ");
    scanf("%d", &endRange);

    printPrimesInRange(startRange, endRange);

    return 0;
}
