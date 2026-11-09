#include <stdio.h>
int main(){
    int n,m;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
        n=(int)n;
    }while(n<1);
    m=0;
    for(;n>0;n=n/10){
        m=m*10 + n%10;
    }
    printf("M = %d", m);
    return 0;
}