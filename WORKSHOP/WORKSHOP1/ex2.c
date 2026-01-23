#include <stdio.h>

int main() {
    float diemChuyenCan, diemGiuaKy, diemCuoiKy;
    float diemTongKet;
    char diemChu;

   
    printf("Nhap diem chuyen can: ");
    scanf("%f", &diemChuyenCan);

    printf("Nhap diem giua ky: ");
    scanf("%f", &diemGiuaKy);

    printf("Nhap diem cuoi ky: ");
    scanf("%f", &diemCuoiKy);

   
    diemTongKet = diemChuyenCan * 0.1 
                + diemGiuaKy * 0.3 
                + diemCuoiKy * 0.6;

   
    if (diemTongKet >= 8.5)
        diemChu = 'A';
    else if (diemTongKet >= 7.0)
        diemChu = 'B';
    else if (diemTongKet >= 5.5)
        diemChu = 'C';
    else if (diemTongKet >= 4.0)
        diemChu = 'D';
    else
        diemChu = 'F';

   
    printf("Diem tong ket: %.2f\n", diemTongKet);
    printf("Diem chu: %c\n", diemChu);

    
    if (diemChuyenCan >= 4.0 && diemGiuaKy >= 4.0 && diemCuoiKy >= 4.0 && diemChu != 'F') {
        printf("Sinh vien DU DIEU KIEN TOT NGHIEP\n");
    } else {
        printf("Sinh vien KHONG DU DIEU KIEN TOT NGHIEP\n");
    }

    return 0;
}
