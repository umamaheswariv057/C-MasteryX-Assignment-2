#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            printf("First Non-Repeating Character: %c", str[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
