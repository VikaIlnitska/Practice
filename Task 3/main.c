#include <stdio.h>

int main() {

    int p;

    printf("Введіть кількість розрядів: ");
    scanf("%d", &p);

    if (p == 1) {
        printf("2\n"); 
        return 0;
    } else if (p == 2) {
        printf("4\n"); 
        return 0;
    } else if (p == 3) {
        printf("6\n"); 
        return 0;
    }

    int dp[p + 1];

    dp[1] = 2; 
    dp[2] = 4; 
    dp[3] = 6; 

    for (int i = 4; i <= p; i++) {
        dp[i] = dp[i-1] + dp[i-2]; 
    }

    printf("%d\n", dp[p]);

    return 0;
}
