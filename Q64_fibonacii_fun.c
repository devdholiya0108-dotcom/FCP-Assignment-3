#include <stdio.h>

void fibonacii(int n);

int main() {
    int n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    fibonacii(n);
    return 0;
}

void fibonacii(int n) {
    int f1=1,f2=1,f;
    printf("Fibonacii Series...\n");
    printf("%d\t%d\t",f1,f2);
    for(int i=0;i<n-2;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%d\t",f);}

} 