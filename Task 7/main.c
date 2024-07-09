#include <stdio.h>
#include <math.h>

int calcPoints(int x1, int y1, int r1, int x2, int y2, int r2) {

    float value;

    value = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (value > r1 + r2) {
        return 0;
    }

    if (value == 0 && r1 == r2) {
        return -1;
    }

    if (value < r1 + r2 && value > r1 - r2) {
        return 2;
    }

    if (value == r1 + r2 || value == r1 - r2) {
        return 1;
    }

    return 0;
}

int main() {
    int x1, y1, r1, x2, y2, r2, result;

    printf("Введіть координати та радіуси кіл: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    result = calcPoints(x1, y1, r1, x2, y2, r2);

    if (result == -1) {
        printf("Точок перетину занадто багато\n");
        return 1;
    }

    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
