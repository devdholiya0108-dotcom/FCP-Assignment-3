#include <stdio.h>

int ncr();

int main() {
    int n,r,value;

    printf("Enter n Number : ");
    scanf("%d", &n);

    printf("Enter r Number : ");
    scanf("%d", &r);

    value= ncr(n)/(ncr(r)*ncr(n-r));
    printf("nCr for given values is %d",value);

    return 0;
}

int ncr(int n){
    int fac=1;
   for(int i=1; i<=n;i++){
    fac*=i;
   }
   return fac;
}