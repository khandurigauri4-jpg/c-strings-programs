// sorting characters of string in ascending order
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("enter a string \n");
fgets(str , 100 , stdin);
int i , j , temp = 1;
for(i = 0; str[i]!='\0'; i++)
{
    for( j = i+1; str[j]!='\0'; j++)
    {
        if(str[i] > str[j])
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
}
printf("sorted string is \n");
puts(str);
    return 0;
}