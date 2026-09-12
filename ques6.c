#include <stdio.h>

int main() {
    int A, B, temp;

    scanf("%d %d", &A, &B);

    temp = A;
    A = B;
    B = temp;

    printf("After swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d", B);

    return 0;
}
