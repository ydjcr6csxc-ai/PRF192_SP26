#include <stdio.h>

int main() {
    int a, b, r;

    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Uoc chung lon nhat (UCLN) la: %d\n", a);

    return 0;
}
