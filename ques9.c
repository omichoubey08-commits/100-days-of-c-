#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T;
    float simpleInterest, compoundInterest;

    scanf("%f %f %f", &P, &R, &T);

    simpleInterest = (P * R * T) / 100;

    compoundInterest = P * pow((1 + R / 100), T) - P;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f", compoundInterest);

    return 0;
}
