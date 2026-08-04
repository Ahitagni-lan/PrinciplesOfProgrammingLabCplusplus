#include <stdio.h>

// Function to print the Fibonacci series up to n terms
void printFibonacci(int terms) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series up to %d terms: ", terms);

    for (int i = 1; i <= terms; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    if (n > 0) {
        printFibonacci(n);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
