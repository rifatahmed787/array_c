#include<stdio.h>
int main(){

    int arr[5];
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        // printf("%d\n",arr[i]);
        sum+=arr[i];
        
    }
    printf("the sum is: %d", sum);
    return 0;
}