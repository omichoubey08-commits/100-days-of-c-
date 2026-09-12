#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    A = A + B;
    B = A - B;
    A = A - B;

    printf("After swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d", B);

    return 0;
}
