#include <stdio.h>
int main(){
    int n,a,max;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    printf("a =:");
    scanf("%d",&a);
    max=a;
    for(; n>1; n--){
        printf("a =: ");
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
    }
    printf("Max = %d",max);
    return 0;
}