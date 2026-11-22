#include <stdio.h>

void palindron(int n);

int main() {
    int m;

    printf("Enter a Number : ");
    scanf("%d", &m);

    palindron(m);
    return 0;
}

void palindron(int n) {
    int temp=n,sum=0,rem=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
    if (temp==sum) {
        printf("Number is Palindron.");
    } else {
        printf("Number is Not Palindron.");
    }
}