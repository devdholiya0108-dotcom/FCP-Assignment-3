
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter names:\n");

    for(i = 0; i < n; i++)
    {
        fgets(name[i], sizeof(name[i]), stdin);
        
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");

    for(i = 0; i < n; i++)
    {
        fputs(name[i],stdout);
    }

    return 0;
}
