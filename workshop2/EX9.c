#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("Game doan so (1 - 100)\n");

    while (1) {
        printf("Nhap so ban doan: ");
        scanf("%d", &guess);

        if (guess > secret) {
            printf("Nho hon\n");
        } else if (guess < secret) {
            printf("Lon hon\n");
        } else {
            printf("Chuc mung! Ban da doan dung.\n");
            break;
        }
    }

    return 0;
}
