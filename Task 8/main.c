#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int calcAn(char *word) {
    int length, div;
    int period[52] = {0};

    length = strlen(word);

    for (int i = 0; i < length; i++) {
        if (isupper(word[i])) {
            period[word[i] - 'A']++;
        } else if (islower(word[i])) {
            period[word[i] - 'a' + 26]++;
        }
    }

    div = factorial(length);

    for (int i = 0; i < 52; i++) {
        if (period[i] > 1) {
            div /= factorial(period[i]);
        }
    }

    return div;
}

int main() {
    char word[15];
    int result;

    printf("Введіть слово: ");
    scanf("%s", word);

    result = calcAn(word);

    printf("Кількість можливих анаграм: %d\n", result);

    return 0;
}
