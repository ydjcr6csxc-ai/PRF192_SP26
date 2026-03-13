#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// Hàm kiểm tra kí tự là nguyên âm (vẫn giữ nguyên logic)
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int countVowel(char *ptr) {
    int count = 0;
    while (*ptr != '\0') {
        if (isVowel(*ptr)) {
            count++;
        }
        ptr++;
    }
    return count;
}

int main() {char *s = (char *)malloc(100 * sizeof(char)); 
    
    if (s == NULL) {
        printf("Không thể cấp phát bộ nhớ!");
        return 1;
    }

    printf("Nhập vào một chuỗi: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    int result = countVowel(s);
    printf("Số lượng nguyên âm trong chuỗi là: %d\n", result);
    free(s);

    return 0;
}