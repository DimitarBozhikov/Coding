#include <stdio.h>
int main(void){
    int n, max=0, i=0, c=0, x=0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    do{
        printf("Enter X: ");
        scanf("%d", &x);
        if(x%3==0){
            if(i==0){
                max=x;
                i=1;
            }else{
                if(max<x){
                    max=x;
                }
            }
        }
        c+=1;
    }while(c<n);
    if(i==0){
        printf("No divisors found.");
    }else{
        printf("Max =: %d", max);
    }
    return 0;
}