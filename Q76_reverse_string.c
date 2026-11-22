#include <stdio.h>

int main() {
    char s1[100],reverse[100];
    int i,count=0;

    printf("Enter String : ");
    gets(s1);

    i=0;
    while(s1[i]!='\0'){
        count++;
        i++;
    }

    i=0;
    count--;
    while(s1[i]!='\0'){
        reverse[count]=s1[i];
        i++;
        count--;
    }

    reverse[i]='\0';

    printf("Reverse string : ");
    puts(reverse);
    
    return 0;
}