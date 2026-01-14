#include <stdio.h>

int main() {
    char kt = 'A';

    // In giá trị ký tự
    printf("Gia tri ky tu: %c\n", kt);

    // In giá trị thập phân, hex, octal
    printf("Gia tri thap phan: %d\n", (int)kt);
    printf("Gia tri hex: %X\n", (int)kt);
    printf("Gia tri octal: %o\n", (int)kt);

    // In kích thước kiểu dữ liệu
    printf("Kich thuoc kieu du lieu cua kt: %lu byte\n", sizeof(kt));

    return 0;
}
