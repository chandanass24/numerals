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
