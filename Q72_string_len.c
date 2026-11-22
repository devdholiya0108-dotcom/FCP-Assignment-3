#include <stdio.h>

int main() {
    char s[100];
    int count=0;

    printf("Enter String : ");
    gets(s);

    int i =0;
    while(s[i]!='\0'){
        count++;
        i++;
    }

    printf("Length of String is %d",count);
    return 0;
}