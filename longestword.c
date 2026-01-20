// printing longest word from the string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter a string \n");
    fgets(str , 100 , stdin);
    str[strcspn(str , "\n")] = '\0';
char longest[100];
char word[100];
char ch;
int j = 0;
int max = 0;
for( int i = 0; str[i]!='\0'; i++)
{
    ch = str[i];
    if(ch == ' ' || ch == '\n')
    {
        word[j] = '\0';
        if(max < strlen(word))
        {
            max = strlen(word);
            strcpy( longest , word);
        }
        j = 0;
    }
    else
    {
        word[j] = ch;
        j++;
    }
}
word[j] = '\0';
if(max < strlen(word)){
    max = strlen(word);
    strcpy(longest , word);
}

printf("the longest word is %s with length %d" , longest , max);

    return 0;
}