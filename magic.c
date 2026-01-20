// check whether string is magic or not (contains consecutive characters like ab , BC)
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("enter a string \n");
fgets(str , 100 , stdin);
str[strcspn(str , "\n")] = '\0';
int i, temp = 0;
char ch1 , ch2;
for( i = 0; str[i+1]!='\0'; i++)
{
    ch1 = (int)str[i];
    ch2 = (int)str[i+1];
    if( (ch2-ch1) != 1 )
    {
        temp = 1;
        break;
    }
}
if(temp == 0)
printf("string is magic");
else
printf("string is not magic");

    return 0;
}