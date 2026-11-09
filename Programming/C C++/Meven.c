#include <stdio.h>
int main(){
    int n,m,i;
    do {
        printf("Enter N: ");
        scanf("%d",&n);
        n=(int)n;
    }while(n<1);
    m=0;i=1;
    for(;n!=0;n=n/10){
        if(n%2==0){
            m=(n%10)*i + m;
            i*=10;
        }
    }
    if(i==1){
        printf("No");
    }else{
        print("M =%d",m);
    }
    return 0;
}