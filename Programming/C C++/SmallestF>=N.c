#include <stdio.h>
int main(void){
    int n,a=1,b=1,f=1;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    while(f<n){
        f=a+b;
        if(a>b){
            b=f;
        }else{
            a=f;
        }
    }
    printf("The smallest fibonacci number not smaller than N is %d", f);
    return 0;
}