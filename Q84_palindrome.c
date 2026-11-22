
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    i = 0;
    j = strlen(str) - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
        printf("String is palindrome");
    else
        printf("String is not palindrome");

    return 0;
}
