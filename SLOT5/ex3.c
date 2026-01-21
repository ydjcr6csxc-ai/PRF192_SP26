#include <stdio.h>

int main() {
    float a, b, c, max;

    printf("nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    printf("so lon nhat la: %.2f", max);
    return 0;
}
