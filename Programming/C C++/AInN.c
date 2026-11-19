#include <stdio.h>
int main(void){
    int n,a,m,i;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    do{
        printf("Enter A: ");
        scanf("%d",&a);
    }while(a<0 || a>9);
    m=0, i=0;
    do{
        m=n%10;
        n/=10;
        if(a==m) i++;
    }while(n>0 && i==0);
    if(i>0){
        printf("Found");
    }else{
        printf("Not found");
    }
    return 0;
}