#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("%c Character is present in the string",ch);
    else
        printf("%c Character is not present in the string",ch);

    return 0;
}
