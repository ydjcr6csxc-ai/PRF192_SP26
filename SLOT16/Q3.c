#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Nh?p x: ");
    scanf("%d", &x);
    printf("Nh?p y: ");
    scanf("%d", &y);

    printf("Tru?c: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Sau: x = %d, y = %d\n", x, y);

    return 0;
}