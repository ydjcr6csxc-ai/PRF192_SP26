#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char name[10][50];
    char temp[50];
    printf("INPUT:\n");
    scanf("%d", &n);
    getchar(); 
    for (i = 0; i < n; i++) {
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\nOUTPUT:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}