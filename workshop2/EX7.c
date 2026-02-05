#include <stdio.h>

int main() {
    int n, i = 0;
    int isPerfectSquare = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    while (i * i <= n) {
        if (i * i == n) {
            isPerfectSquare = 1;
            break;
        }
        i++;
    }

    if (isPerfectSquare) {
        printf("%d la so chinh phuong\n", n);
    } else {
        printf("%d khong phai la so chinh phuong\n", n);
    }

    return 0;
}
