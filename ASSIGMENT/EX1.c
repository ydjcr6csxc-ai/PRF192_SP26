#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n;  // thiếu khai báo biến n

    fp = fopen("BAITAP1.TXT", "w");

    if (fp == NULL) {
        printf("ERROR!");
        return 0;
    }

    printf("Nhap vao so n: ");
    scanf("%d", &n);

    fprintf(fp, "Gia tri n: %d", n);

    fclose(fp);

    return 0;  // thiếu dấu ;
}