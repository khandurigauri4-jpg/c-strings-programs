// checking palindrome string
#include <stdio.h>
#include <string.h>
int ispalin(char s[]);
int main() {
    char str[100];
    printf("enter a string \n");
    scanf("%s" , str);
    int k = ispalin(str);
    if( k == 1)
    printf(" %s is a palindrome string " , str);
    else
    printf("not palindrome");
    return 0;
}
int ispalin(char s[])
{
    char newstr[100];
    int j = 0;
    int l = strlen(s);
    for( int i = l-1; i>=0; i--)
    {
        newstr[j] = s[i];
        j++;
    }
    newstr[j] = '\0';
    int c = strcmp( s , newstr);
    if( c == 0)
    return 1;
    else
    return 0;
}