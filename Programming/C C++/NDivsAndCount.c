#include <stdio.h>
int main(void){
    int n,i=1,c=0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    for(;n>=i;i++){
        if(n%i==0){
            c++;
            printf("I = %d; ", i);
        }
    }
    printf("C = %d", c);
    return 0;
}