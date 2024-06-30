#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int j =0 ; j< n; j++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i< n; i++){
            scanf("%d", &a[i]);
        }
        int check;
        scanf("%d", &check);
        int count = 0;
        for(int i = 0; i< n; i++){
            if(a[i] == check){
                count++;
                break;
            }
        }
        if(count == 0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}