#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("INPUT:\n");
    fgets(str, sizeof(str), stdin);
    while (str[count] != '\0') {
        count++;
    }
    if (str[count-1] == '\n') {
        count--;
    }
    printf("\nOUTPUT:\n%d", count);
    return 0;
}