#include <stdio.h>

int main() {
    char s1[100],s2[100];
    int i,flag=0;

    printf("Enter String 1 : ");
    gets(s1);

    printf("Enter String 2 : ");
    gets(s2);

    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i] > s2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("S2 is Bigger than S1.\n");
    else
        printf("S1 is Bigger than S2.\n");


    return 0;
}