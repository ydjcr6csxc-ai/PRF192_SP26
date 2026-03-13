#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char c) {
	c = tolower(c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}
int countVowel(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
    	if (isVowel(str[i])) {
            count++;
        }
    }
    return count;
}int main() {
    char s[100];

    printf("Nhập vào một chuỗi: ");
    fgets(s, sizeof(s), stdin);
    int result = countVowel(s);
    printf("Số lượng nguyên âm trong chuỗi là: %d\n", result);

    return 0;
}