#include <stdio.h>
int main(){
    int n,sum;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
        n=(int)n;
    }while(n<1);
    sum = 0;
    for(;n>0;n=n/10){
        sum+=n%10;
    }
    printf("Sum = %d",sum);
    return 0;
}