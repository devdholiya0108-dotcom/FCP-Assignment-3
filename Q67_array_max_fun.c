#include <stdio.h>

void max(int n[], int no);

int main() {
    int m[10],num;

    printf("Enter how many Number you want : ");
    scanf("%d",&num);
    for(int i=0; i<num;i++){
    printf("\nEnter number %d : ",i+1);
    scanf("%d", &m[i]);
    }

    max(m,num);
    return 0;
}

void max(int n[], int no) {
    int max=n[0];
    for(int i=1;i<no;i++){
        if(max < n[i]){
            max=n[i];
        }
    }
    printf("Max Number is %d ",max);

}