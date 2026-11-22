#include <stdio.h>

void interchange(int n,int m);

int main() {
    int x,y;

    printf("Enter a First Number : ");
    scanf("%d", &x);
    printf("Enter a Second Number : ");
    scanf("%d", &y);

    interchange(x,y);
    return 0;
}

void interchange(int n,int m) {
    m=m+n;
    n=m-n;
    m=m-n;
    printf("X = %d  Y = %d",n,m);
}