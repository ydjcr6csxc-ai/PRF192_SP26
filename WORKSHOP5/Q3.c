#include <stdio.h>
int main() {
    char str[100];
    int i = 0, len = 0;
    int check = 1;
    printf("INPUT:\n");
    scanf("%s", str);
    while (str[len] != '\0') {
        len++;
    }
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            check = 0;
            break;
        }
    }
    printf("\nOUTPUT:\n");
    if (check == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}