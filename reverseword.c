// reversing each word in the string
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("enter a string \n");
fgets(str , 100 , stdin);
int i , k ,l, j = 0 , p = 0;
char ch;
char rev[100];
char word[100];
for(i = 0; str[i]!='\0'; i++)
{
    ch = str[i];
    if(ch == ' ' || ch == '\n')
    {
        word[j] = '\0';
        l = strlen(word);
        for( k = l-1 ; k >= 0 ; k-- )
        {
            rev[p++] = word[k];
        }
        rev[p] = '\0';
        printf("%s \t" , rev);
        j = 0;
        p = 0;
    }
    else
    {
        word[j] = ch;
        j++;
    }
}
word[j] = '\0';
l = strlen(word);
        for( k = l-1 ; k <= 0 ; k++ )
{
                rev[p] = word[k];

}
printf("%s" , rev);
    return 0;
}