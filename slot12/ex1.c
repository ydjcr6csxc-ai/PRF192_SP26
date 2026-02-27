#include <stdio.h>
int tinhTongUoc(int n) {
	int tong = 0;
	int i;
	 for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    return tong;
}
int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong cac uoc cua %d la: %d", n, tinhTongUoc(n));

    return 0;
}
