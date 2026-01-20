// checking whether a string is unique or not
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("enter a string \n");
fgets(str , 100 , stdin);
str[strcspn(str , "\n")] = '\0';
int i,j , temp = 0;
for( i = 0; str[i]!='\0'; i++)
{
    for( j = i+1; str[j]!='\0'; j++)
    {
        if(str[i]==str[j] && str[i]!=' ' && str[i]!='\n')
        {
            temp = 1;
            break;
        }
    }
}
if(temp == 0)
printf("string is unique");
else
printf("string is not unique");

    return 0;
}