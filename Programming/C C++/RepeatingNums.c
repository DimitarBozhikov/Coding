#include <stdio.h>
int main(void){
    int n,m=0,f=0,d=0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    while(n>0 && f==0){
        d=n;
        m=n%10;
        do{
            d/=10;
            if(m==d%10 && d>0){
                f=1;
                break;
            }
        }while(d>0);
        n/=10;
    }
    if(f==0){
        printf("No repeating numbers");
    }else{
        printf("There are repeating numbers");
    }
    return 0;
}