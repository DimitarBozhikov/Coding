#include <stdio.h>
int main(void){
    int n,max=0,c=0,x=0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    for(;n>0;n/=10){
        x=n%10;
        if(max<x){
            max=x;
            c=1;
        }else{
            if(max==x){
                c+=1;
            }
        }
    }
    printf("Max = %d; It repeats %d times", max, c);
    return 0;
}