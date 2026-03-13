#include <stdio.h>

void swap3(int *n1, int *n2, int *n3) {
    int temp = *n1;
    *n1 = *n3;
    *n3 = *n2;
    *n2 = temp;
}

int main() {
    int a, b, c;

    printf("Nhập a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Truớc: a = %d, b = %d, c = %d\n", a, b, c);

    swap3(&a, &b, &c);

    printf("Sau:  a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}