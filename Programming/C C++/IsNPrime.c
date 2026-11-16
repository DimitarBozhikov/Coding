#include <stdio.h>
int main(){
    int n,i;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<2);
    for(i=2;n%i!=0;i++);
    if(n==i) printf("Prime number");
    else printf("Not a prime number");
    return 0;
}