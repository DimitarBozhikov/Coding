#include <stdio.h>
int main(void){
    int n, a=1, b=1,f=0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    while(f<=n){
        f=a+b;
        if(a>b){
            b=f;
        }else{
            a=f;
        }
    }
    if(a>b){
        printf("Largest fibonacci number, not larger than N is = %d", b);
    }else{
        printf("Largest fibonacci number, not larger than N is = %d", a);
    }
    return 0;
}