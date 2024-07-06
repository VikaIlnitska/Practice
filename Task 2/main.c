#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int r;
    
    printf("Введіть кількість чисел: ");
    scanf("%d", &r);
    
    int numbers[r];
    
    printf("Введіть числа, розділені пробілом: ");
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int result = numbers[0];
    for (int i = 1; i < r; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне: %d\n", result);
    
    return 0;
}