#include <stdio.h>

float calculate_salary(float hours, float rate) {
    float salary;

    if (hours > 40) {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    } else {
        salary = hours * rate;
    }

    return salary;
}

int main() {
    float hours, rate;

    printf("Nhap so gio lam: ");
    scanf("%f", &hours);

    printf("Nhap luong moi gio: ");
    scanf("%f", &rate);

    if (hours < 0 || rate < 0) {
        printf("Du lieu khong hop le!\n");
    } else {
        float total = calculate_salary(hours, rate);
        printf("Tong luong: %.2f\n", total);
    }

    return 0;
}