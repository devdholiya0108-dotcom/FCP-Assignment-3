#include <stdio.h>

int primeornot();

int main() {
    int m;

    printf("Enter a Number : ");
    scanf("%d", &m);

    printf("%d",primeornot(m));

    return 0;
}

int primeornot(int n) {
    int flag=0;
   for(int i=2;i<n;i++){
    if(n%i==0){
       flag=1;
       break;
    }
   }
   if(flag==1){
    return 1;
   }
   else{
    return 0;
   }
}