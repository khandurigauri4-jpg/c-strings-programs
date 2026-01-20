// printing words which start and end with a vowel
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("enter a string \n");
fgets(str , 100 , stdin);
str[strcspn(str , "\n")] = '\0';
int i , n , j = 0;
char ch;
char word[100];
char start , end;
printf("words which start and end with a vowel are \n");
for( i = 0; str[i]!='\0'; i++)
{
    ch = str[i];
    if(ch == ' ' || ch == '\n')
    {
        word[j] = '\0';
        n = strlen(word);
        start = word[0];
        end = word[n-1];
        if((start == 'a' || start == 'e' || start == 'i' || start == 'o' || start == 'u') && ( end == 'a' || end == 'e' || end == 'i' || end == 'o' || end == 'u') )
        printf("%s \n" , word);
         j = 0;
         
    }
    else
    {
        word[j] = ch; 
        j++;
    }
}
word[j] = '\0';
n = strlen(word);
start = word[0];
end = word[n-1];
if((start == 'a' || start == 'e' || start == 'i' || start == 'o' || start == 'u') && (end == 'a' || end == 'e' || end == 'i' || end == 'o' || end == 'u'))
printf("%s" , word);

    return 0;
}