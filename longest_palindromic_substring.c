#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
    while (left < right) {
        if (str[left] != str[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[100];
    int i, j, maxLength = 1;
    int start = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {

            if (isPalindrome(str, i, j)) {
                if (j - i + 1 > maxLength) {
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");

    for (i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
