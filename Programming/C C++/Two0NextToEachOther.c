#include <stdio.h>
int main(void){
    int n,m=1,c=0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    for(;n>0 && c<2;n/=10){
        m=n%10;
        if(m==0){
            c+=1;
        }else{
            c=0;
        }
    }
    if(c==2){
        printf("Yes, there are two 0 next to each other");
    }else{
        printf("No, there aren't two 0 next to each other");
    }
    return 0;
}