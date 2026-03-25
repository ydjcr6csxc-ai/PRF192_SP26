#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float grade;
} SinhVien;

int main() {
    FILE *fp;
    SinhVien sv;

    // Nhập thông tin sinh viên
    printf("Nhap ID: ");
    scanf("%d", &sv.id);

    printf("Nhap ten: ");
    fflush(stdin);              // tránh lỗi nhập chuỗi
    fgets(sv.name, sizeof(sv.name), stdin);

    printf("Nhap diem: ");
    scanf("%f", &sv.grade);

    // Mở file để ghi
    fp = fopen("BAITAP3.TXT", "w");

    if (fp == NULL) {
        printf("Khong mo duoc file!\n");
        return 0;
    }

    // Ghi vào file
    fprintf(fp, "ID: %d\n", sv.id);
    fprintf(fp, "Name: %s", sv.name);
    fprintf(fp, "Grade: %.2f\n", sv.grade);

    fclose(fp);

    printf("Da ghi thong tin vao BAITAP3.TXT\n");

    return 0;
}