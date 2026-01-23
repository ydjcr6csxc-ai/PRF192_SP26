#include <stdio.h>

int main() {
    float soKm;
    int soPhutCho;
    float tongTien = 0;

  
    printf("Nhap so km: ");
    if (scanf("%f", &soKm) != 1 || soKm < 0) {
        printf("NHAP SAI");
        return 0;
    }

    
    printf("Nhap so phut cho: ");
    if (scanf("%d", &soPhutCho) != 1 || soPhutCho < 0) {
        printf("NHAP SAI");
        return 0;
    }

    
    if (soKm <= 0.5)
        tongTien = 12000;
    else if (soKm <= 30)
        tongTien = 12000 + (soKm - 0.5) * 15000;
    else
        tongTien = 12000 + 29.5 * 15000 + (soKm - 30) * 12000;

    
    if (soPhutCho > 5)
        tongTien += (soPhutCho - 5) * 1000;

   
    printf("\nSO KM\t\tSO PHUT CHO\t\tTONG TIEN");
    printf("\n%.2f\t\t%d\t\t\t%.0f", soKm, soPhutCho, tongTien);

    return 0;
}