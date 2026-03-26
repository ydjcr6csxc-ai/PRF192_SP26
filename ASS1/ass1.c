#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEN_FILE "products.bin"

typedef struct {
    int maSP;
    char tenSP[50];
    float gia;
    int soLuong;
} SanPham;

void ghiMoi();
void ghiThem();
void docDanhSach();
void suaSanPham();

int main() {
    int luaChon;

    do {
        printf("\n===== QUAN LY SAN PHAM =====\n");
        printf("1. Ghi moi (xoa du lieu cu)\n");
        printf("2. Ghi them san pham\n");
        printf("3. Doc danh sach\n");
        printf("4. Sua san pham\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                ghiMoi();
                break;
            case 2:
                ghiThem();
                break;
            case 3:
                docDanhSach();
                break;
            case 4:
                suaSanPham();
                break;
            case 5:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (luaChon != 5);

    return 0;
}

void ghiMoi() {
    FILE *f = fopen(TEN_FILE, "wb");
    if (f == NULL) {
        printf("Loi mo file!\n");
        return;
    }

    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    SanPham sp;

    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d:\n", i + 1);

        printf("Ma SP: ");
        scanf("%d", &sp.maSP);

        printf("Ten SP: ");
        getchar();
        fgets(sp.tenSP, 50, stdin);
        sp.tenSP[strcspn(sp.tenSP, "\n")] = 0;

        printf("Gia: ");
        scanf("%f", &sp.gia);

        printf("So luong: ");
        scanf("%d", &sp.soLuong);

        fwrite(&sp, sizeof(SanPham), 1, f);
    }

    fclose(f);
    printf("Ghi moi thanh cong!\n");
}

void ghiThem() {
    FILE *f = fopen(TEN_FILE, "ab");
    if (f == NULL) {
        printf("Loi mo file!\n");
        return;
    }

    int n;
    printf("Nhap so san pham can them: ");
    scanf("%d", &n);

    SanPham sp;

    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d:\n", i + 1);

        printf("Ma SP: ");
        scanf("%d", &sp.maSP);

        printf("Ten SP: ");
        getchar();
        fgets(sp.tenSP, 50, stdin);
        sp.tenSP[strcspn(sp.tenSP, "\n")] = 0;

        printf("Gia: ");
        scanf("%f", &sp.gia);

        printf("So luong: ");
        scanf("%d", &sp.soLuong);

        fwrite(&sp, sizeof(SanPham), 1, f);
    }

    fclose(f);
    printf("Them san pham thanh cong!\n");
}

void docDanhSach() {
    FILE *f = fopen(TEN_FILE, "rb");
    if (f == NULL) {
        printf("Chua co du lieu!\n");
        return;
    }

    SanPham sp;

    printf("\n---------------------------------------------\n");
    printf("MaSP\tTenSP\t\tGia\tSoLuong\n");
    printf("---------------------------------------------\n");

    while (fread(&sp, sizeof(SanPham), 1, f)) {
        printf("%d\t%-15s\t%.2f\t%d\n",
               sp.maSP, sp.tenSP, sp.gia, sp.soLuong);
    }

    printf("---------------------------------------------\n");

    fclose(f);
}

void suaSanPham() {
    FILE *f = fopen(TEN_FILE, "rb+");
    if (f == NULL) {
        printf("Khong tim thay file!\n");
        return;
    }

    int ma, timThay = 0;
    SanPham sp;

    printf("Nhap ma san pham can sua: ");
    scanf("%d", &ma);

    while (fread(&sp, sizeof(SanPham), 1, f)) {
        if (sp.maSP == ma) {
            timThay = 1;

            printf("Tim thay! Nhap thong tin moi:\n");

            printf("Ten moi: ");
            getchar(); // QUAN TRỌNG
            fgets(sp.tenSP, 50, stdin);
            sp.tenSP[strcspn(sp.tenSP, "\n")] = 0;

            printf("Gia moi: ");
            scanf("%f", &sp.gia);

            printf("So luong moi: ");
            scanf("%d", &sp.soLuong);

            // QUAN TRỌNG NHẤT
            fseek(f, -sizeof(SanPham), SEEK_CUR);

            fwrite(&sp, sizeof(SanPham), 1, f);

            printf("Cap nhat thanh cong!\n");
            break;
        }
    }

    if (!timThay) {
        printf("Khong tim thay san pham!\n");
    }

    fclose(f);
}