#include <stdio.h>

int main() {
    char s[100],cpys[100];
    int i;

    printf("Enter String : ");
    gets(s);

    i=0;
    while(s[i]!='\0'){
        cpys[i]=s[i];
        i++;
    }

    cpys[i]='\0';
    printf("Copied string : ");
    puts(cpys);
    
    return 0;
}