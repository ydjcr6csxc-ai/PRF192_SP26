#include <stdio.h>

// Hàm in mã ASCII từ a đến z
void inMaASCII() {
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c : %d\n", ch, ch);
    }
}

int main() {
    char choice;
    int check;

    do {
        printf("Nhap y de in bang ASCII tu a den z: ");
        check = scanf(" %c", &choice);

        if (check != 1 || choice != 'y') {
            printf("Nhap sai! Vui long nhap lai.\n");
            fflush(stdin);
        }

    } while (check != 1 || choice != 'y');

    inMaASCII();

    return 0;
}