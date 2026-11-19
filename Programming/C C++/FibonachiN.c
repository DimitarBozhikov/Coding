#include <stdio.h>
int main(void){
    int n,a=0,b=1;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    if(n>1){
        printf("%d, %d; ", a, b);
        n-=2;
    }else{
        printf("%d", a);
        n-=1;
    }
    while(n>0){
        if(a>b){
            b+=a;
            printf("%d; ", b);
        }else{
            a+=b;
            printf("%d; ", a);
        }
        n-=1;
    }
    return 0;
}