#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *S = (char *)malloc(10000001 * sizeof(char)); // Dynamically allocate memory for input string
    if (S == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    scanf("%s", S); 
    
    int *counts = (int *)calloc(26, sizeof(int));
    if (counts == NULL) {
        printf("Memory allocation failed.\n");
        free(S); 
        return 1;
    }

   
    for(int i = 0; i < strlen(S); i++) {
        
        counts[S[i] - 'a']++;
    }

    
    for(int i = 0; i < 26; i++) {
        if(counts[i] > 0) {
            printf("%c : %d\n", i + 'a', counts[i]);
        }
    }

   
    free(S);
    free(counts);

    return 0;
}
