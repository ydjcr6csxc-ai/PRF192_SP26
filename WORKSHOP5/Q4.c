#include <stdio.h>
int main() {
    char str[200];
    int i = 0, count = 0;
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if ((str[i] != ' ' && str[i] != '\n') && (str[i-1] == ' ' || i == 0)) {
            count++;
        }
        i++;
    }
    printf("\nOUTPUT:\n%d", count);
    return 0;
}