
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    n = strlen(str);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string ");
    fputs(str,stdout);

    return 0;
}
