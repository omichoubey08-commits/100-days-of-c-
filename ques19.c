#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
        printf("Invalid Triangle");
    else if (a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid Triangle");
    else if (a == b && b == c)
        printf("Equilateral Triangle");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}
