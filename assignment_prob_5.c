#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);
   
    if(x >= 0 && x < n) {  
        a[x] = v;
    } else {
        printf("Invalid x.\n");
    }

    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
