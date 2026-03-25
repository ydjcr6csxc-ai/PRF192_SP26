#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int a[100];
    FILE *fp;

    // Nhap n
    do {
        printf("Nhap so luong phan tu n : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    // Nhap mang (1 dong)
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ghi file
    fp = fopen("baitap2.txt", "w");
    if (fp == NULL) {
        printf("Khong mo duoc file!\n");
        return 1;
    }

    fprintf(fp, "%d\n", n);
    for (i = 0; i < n; i++) {
        fprintf(fp, "%d ", a[i]);
    }
    fclose(fp);

    printf("\nDa ghi file thanh cong!\n");

    // Doc file
    fp = fopen("baitap.txt", "r");
    if (fp == NULL) {
        printf("Khong mo duoc file de doc!\n");
        return 1;
    }

    int n_read;
    fscanf(fp, "%d", &n_read);

    printf("So luong phan tu: %d\n", n_read);
    printf("Mang doc tu file: ");

    for (i = 0; i < n_read; i++) {
        fscanf(fp, "%d", &a[i]);
        printf("%d ", a[i]);
    }

    fclose(fp);

    printf("\n");
    return 0;
}