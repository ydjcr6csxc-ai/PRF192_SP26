#include <stdio.h>
int main() {
    char str[100];
    char find, replace;
    int i = 0, count = 0;
    printf("INPUT:\n");
    scanf("%s", str);
    scanf(" %c", &find);
    scanf(" %c", &replace);
    while (str[i] != '\0') {
        if (str[i] == find) {
            str[i] = replace;
            count++;
        }
        i++;
    }
    printf("\nOUTPUT:\n");
    printf("%d\n", count);
    printf("%s", str);
    return 0;
}