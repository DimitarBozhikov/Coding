#include <stdio.h>
int main(){
    int n,i;
    i=0;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
        n=(int)n;
    }while(n<1);
    for(;n>0; n=n/10){
        i++;
    }
    printf("Number of digits = %d",i);
    return 0;
}