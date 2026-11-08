#include <stdio.h>
int main() {
    int h1,m1,h2,m2;
    printf("Enter the first time (Hour,Minute):");
    scanf("%d %d",&h1,&m1);
    printf("Enter the second time (Hour,Minute):");
    scanf("%d %d",&h2,&m2);
    h1 = h1 * 60 + m1;
    h2 = h2 * 60 + m2;
    if(h2 < h1) {
        h2 += 24 * 60;
    }
    int m3 = h2 - h1;
    int h3 = m3 / 60;
    m3 = m3 % 60;
    printf("The car travelled %d hours and %d minutes",h3,m3);
    return 0;
}