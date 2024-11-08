#include <stdio.h>
#include <math.h>

// Function prototypes
void fibonacci(int limit);
void prime(int limit);
void x_power_x(int limit);

int main() {
    int choice, limit;

    printf("Choose the series to generate:\n");
    printf("1. Fibonacci Series\n");
    printf("2. Prime Numbers\n");
    printf("3. x^x Series\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    switch (choice) {
        case 1:
            fibonacci(limit);
            break;
        case 2:
            prime(limit);
            break;
        case 3:
            x_power_x(limit);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
void fibonacci(int limit) {
    int a = 0, b = 1, next;

    printf("Fibonacci Series up to %d: ", limit);
    for (int i = 1; i <= limit; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

void prime(int limit) {
    int num, i, isPrime;

    printf("Prime Numbers up to %d: ", limit);
    for (num = 2; num <= limit; num++) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");
}

void x_power_x(int limit) {
    printf("x^x Series up to %d: ", limit);
    for (int x = 1; x <= limit; x++) {
        printf("%.0f ", pow(x, x));
    }
    printf("\n");
}
