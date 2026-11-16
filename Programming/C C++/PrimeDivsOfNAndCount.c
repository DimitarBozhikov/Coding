#include <stdio.h>
int main(void){
    int n,i=2,c=0,j;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    for(;n>=i;i++){
        j=2;
        if(n%i==0){
            if(i%j!=0){
                j++;
            }else{
                if(j==i){
                    printf("I = %d ;", i);
                    c++;
                }
            }
        }
    }
    printf("C = %d ", c);
    return 0;
}