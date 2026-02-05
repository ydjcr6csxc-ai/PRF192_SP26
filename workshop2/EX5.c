#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap cac so nguyen duong (nhap 0 de ket thuc):\n");

    scanf("%d", &n);
    while (n != 0) {
        if (n > 0) {
            sum += n;
        }
        scanf("%d", &n);
    }

    printf("Tong cac so nguyen duong da nhap la: %d\n", sum);

    return 0;
}
