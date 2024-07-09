#include <stdio.h>

int main() {
    int n, count = 0;
    
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Неправильне значення n. Будь ласка, введіть натуральне число n (1 < n < 150).\n");
        return 1;
    }

    for (int m = 1; m < n; ++m) {
        if (n / m == n % m) {
            ++count;
        }
    }

    printf("Кількість рівних дільників для числа %d: %d\n", n, count);
    
    return 0;
}
