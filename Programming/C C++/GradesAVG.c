#include <stdio.h>
int main(){
    int n,i,sum,a;
    a =0; sum=0;
    float avg;
    avg=0;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n<1);
    for(i=n; i>0; i--){
        do {
            printf("a =: ");
            scanf("%d",&a);
        }while(a<2 || a>6);
        sum+=a;
    }
    avg= (float)sum/n;
    printf("avg = %.2f",avg);
    return 0;
}