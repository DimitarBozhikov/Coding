#include <stdio.h>
int main() {
    int n,sum,a;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    printf("N=%d\n",n);
    sum=0;
    for(; n>0; n--){
        printf("a =: ");
        scanf("%d",&a);
        sum+=a;
    }
    printf("Sum = %d",sum);
    return 0;
}