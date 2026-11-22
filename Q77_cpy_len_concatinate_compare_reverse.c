#include <stdio.h>
#include<string.h>
int main() {
    char s1[100],s2[100],s3[100];

    printf("Enter String 1: ");
    gets(s1);
    strcpy(s2,s1);
    printf("Copied String is :");
    puts(s2);
    printf("Enter String 1: ");
    gets(s1);
    printf("Enter String 2: ");
    gets(s2);
    strcat(s1,s2);
    printf("Concatinate String is :");
    puts(s1);
    printf("Enter String 1: ");
    gets(s1);
    printf("Enter String 2: ");
    gets(s2);
    strcmp(s1,s2);
    if(strcmp(s1,s2)>0)
    printf("String S1 is Big.\n");
    else printf("String S2 is Big\n");
    printf("Enter String 1: ");
    gets(s1);
    strrev(s1);
    printf("Reverse string is : " );
    puts(s1);

    return 0;
}