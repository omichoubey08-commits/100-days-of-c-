#include <stdio.h>

int main() {
    float A, B;

    scanf("%f %f", &A, &B);

    printf("Sum = %.2f\n", A + B);
    printf("Difference = %.2f\n", A - B);
    printf("Product = %.2f\n", A * B);

    if (B != 0)
        printf("Quotient = %.2f\n", A / B);
    else
        printf("Division by zero is not possible\n");

    return 0;
}
