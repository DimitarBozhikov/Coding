#include <stdio.h>
int main(){
    int n,h,l,x;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    h=0, l=9;
    do{
        x=n%10;
        if(h<x) h=x;
        if(l>x) l=x;
        n/=10;
    }while(n>0);
    printf("Highest number is %d, Lowest number is %d", h ,l);
}