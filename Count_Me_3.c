#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[10001];
        scanf("%s", S);

        int uppercaseCount = 0;
        int lowercaseCount = 0;
        int digitCount = 0;

        for (int i = 0; S[i] != '\0'; i++) {
            if (isupper(S[i])) {
                uppercaseCount++;
            } else if (islower(S[i])) {
                lowercaseCount++;
            } else if (isdigit(S[i])) {
                digitCount++;
            }
        }

        printf("%d %d %d\n", uppercaseCount, lowercaseCount, digitCount);
    }

    return 0;
}
