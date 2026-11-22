#include <stdio.h>

int main() {
    char s1[100],s2[100],concatinate[100];
    int i;

    printf("Enter String1 : ");
    gets(s1);

    printf("Enter String2 : ");
    gets(s2);

    i=0;
    while(s1[i]!='\0'){
        concatinate[i]=s1[i];
        i++;
    }
    concatinate[i]=' ';
    i++;
    int j=0;
    while(s2[j]!='\0'){
        concatinate[i]=s2[j];
        i++;
        j++;
    }
    
    concatinate[i]='\0';

    printf("Concatinate string : ");
    puts(concatinate);
    
    return 0;
}