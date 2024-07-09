#include <stdio.h>

#define MOD 12345

int main() {
    int n, result, a = 1, b = 1, c = 0, a_prev, b_prev, c_prev;

    printf("Введіть довжину послідовності(n): ");
    scanf("%d", &n);

    if(n < 1 || n > 10000) {
        printf("Invalid value");
        return 1;
    }

    if (n == 1) {
        printf("2\n");
        return 0;
    }
    if (n == 2) {
        printf("4\n");
        return 0;
    }
    if (n == 3) {
        printf("7\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        a_prev = a;
        b_prev = b;
        c_prev = c;

        a = (a_prev + b_prev + c_prev) % MOD;
        b = a_prev % MOD;
        c = b_prev % MOD;
    }


    result = (a + b + c) % MOD;

    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
