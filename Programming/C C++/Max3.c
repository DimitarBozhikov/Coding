#include <stdio.h>
int main(void){
    int a,b,c;;
    printf("a =:");
    scanf("%d",&a);
    printf("b =:");
    scanf("%d",&b);
    printf("c =:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("Max = %d",a);
        }else{
            printf("Max = %d",c);
        }
    }else{
        if(b>c){
            printf("Max = %d",b);
        }else{
            printf("Max = %d",c);
        }
    }
    return 0;
}