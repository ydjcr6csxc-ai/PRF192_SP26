#include <stdio.h>

int main() {
    int a = 7;
    int b = 2;
    int kq;

    // Phep cong
    kq = a + b;
    printf("%d + %d = %d\n", a, b, kq);

    // Phep tru
    kq = a - b;
    printf("%d - %d = %d\n", a, b, kq);

    // Phep nhan
    kq = a * b;
    printf("%d * %d = %d\n", a, b, kq);

    // Phep chia
    printf("%d / %d = %.2f\n", a, b, (float)a / b);

    return 0;
}
