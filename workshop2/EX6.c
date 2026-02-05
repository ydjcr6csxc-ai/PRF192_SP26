#include <stdio.h>

int main() {
    int n, remainder;
    int binary = 0;
    int i = 1;

    printf("Nhap so thap phan: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 2;
        binary = binary + remainder * i;
        n = n / 2;
        i = i * 10;
    }

    printf("So nhi phan tuong ung la: %d\n", binary);

    return 0;
}
