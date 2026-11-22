#include <stdio.h>

void armstrong(int n);

int main() {
    int m;

    printf("Enter a Number : ");
    scanf("%d", &m);

    armstrong(m);
    return 0;
}

void armstrong(int n) {
    int temp=n,index=0,rem=0,sum=0,temprem=0;
    while(n>0){
        index++;
        n/=10;
    }
    n=temp;
    while(n>0){
        rem=n%10;
        temprem=rem;
        for(int i=0;i<index-1;i++){
            rem*=temprem;
        }
        sum+=rem;
        n/=10;
    }   
    if (temp==sum) {
        printf("Number is Armstrong.");
    } else {
        printf("Number is Not Armstrong.");
    }
}