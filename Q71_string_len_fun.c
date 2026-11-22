#include <stdio.h>

void str_len(char str[]);
int main() {
    char s[100];

    printf("Enter String : ");
    gets(s);

   str_len(s);

    return 0;
}
void str_len(char str[]){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }

    printf("Length of String is %d",count);
}