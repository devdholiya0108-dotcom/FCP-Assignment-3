
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char str[200];
    int i, lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(islower((unsigned char)str[i]))
            lower++;
        else if(isupper((unsigned char)str[i]))
            upper++;
        else if(isdigit((unsigned char)str[i]))
            digit++;
        else if(str[i] != ' ' && str[i] != '\n')
            special++;
    }

    printf("Lowercase letters = %d\n", lower);
    printf("Uppercase letters = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special symbols = %d\n", special);

    return 0;
}
