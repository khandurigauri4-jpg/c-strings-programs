// remove duplicate characters from the string
#include <stdio.h>
#include <string.h>
int main() {
    
char str[100];
printf("enter a string \n");
fgets( str , 100 , stdin);
str[strcspn(str , "\n")] = '\0';
for( int i = 0 ; str[i]!='\0'; i++)
{
    for( int j = i+1; str[j]!='\0' ; j++)
    {
        if(str[i] == str[j] && str[i]!='\n' && str[i]!=' ')
        {
            for( int k = j ; str[k]!='\0'; k++)
            {
                str[k] = str[k+1];
            }
            j--;
        }
    }
}
printf("string after deleting duplicate characters \n");
puts(str);
    return 0;
}