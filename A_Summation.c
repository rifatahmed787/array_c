#include<stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+= a[i];
    }
    if(sum<0){
        sum=abs(sum);
    }
    printf("%d\n",sum);
    return 0;
}