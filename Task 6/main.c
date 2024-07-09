#include <stdio.h>
#include <math.h>

float calcVector (int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main () {
    int x1, y1, x2, y2;
    float result;

    printf("Введіть координати вектора: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    result = calcVector(x1, y1, x2, y2);

    printf("Довжина вектора: %.6f", result);

}
