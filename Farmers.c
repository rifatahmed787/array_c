#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int fewerDays = D - (M1 * D) / (M1 + M2);

        printf("%d\n", fewerDays);
    }

    return 0;
}
