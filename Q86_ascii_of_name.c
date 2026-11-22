
#include <stdio.h>
int main()
{
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("ASCII codes of your name:\n");

    for(i = 0; name[i] != '\0'&&name[i]!='\n'; i++)
    {
        printf("%c = %d\n", name[i], (int)name[i]);
    }

    return 0;
}
