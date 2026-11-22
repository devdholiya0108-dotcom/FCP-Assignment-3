#include <stdio.h>

void evenodd(int n);

int main() {
    int m;

    printf("Enter a Number : ");
    scanf("%d", &m);

    evenodd(m);
    return 0;
}

void evenodd(int n) {
    if (n % 2 == 0) {
        printf("Number is Even.");
    } else {
        printf("Number is Odd.");
    }
}