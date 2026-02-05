#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap so nguyen n (1 <= n <= 10): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    printf("Cac so tu 1 den %d la:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
