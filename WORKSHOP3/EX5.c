#include <stdio.h>

int is_prime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int a, b, i;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++) {

        if (i != 2 && i % 2 == 0)
            continue;

        if (is_prime(i))
            printf("%d ", i);
    }

    return 0;
}