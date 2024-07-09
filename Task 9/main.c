#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int calcSteps(int x, int y) {
     int step = 1, steps = 0, temp;

    if (x == y) {
        return 0;
    }

    temp = y - x;
    while (temp > 0) {
        temp -= step;
        steps++;

        if (temp <= 0) {
            break;
        }
        temp -= step;
        steps++;
        step++;
    }

    return steps;
}

int main() {
    int x, y, answer;

    printf("Введіть x: ");
    scanf("%d", &x);

    printf("Введіть y: ");
    scanf("%d", &y);

    if (x < 0 || y < 0 || x > y || x >= INT_MAX || y >= INT_MAX) {
        printf("Значення невірні. Вони повинні бути: 0 <= x <= y < %d.\n", INT_MAX);
        return 1;
    }

    answer = calcSteps(x, y);

    printf("Мінімальна кількість кроків від x (%d) до y (%d): %d\n", x, y, answer);

    return 0;
}
