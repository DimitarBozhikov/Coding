#include <stdio.h>
int main() {
    int n,sum;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    sum=0;
    for(; n>0; n--){
        sum+=n;
    }
    printf("Sum = %d",sum);
    return 0;
}