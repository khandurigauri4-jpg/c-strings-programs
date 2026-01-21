// printing word with max frequency
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
printf("enter a string \n");
fgets(str , 100 , stdin);
int maxcount = 0;
int count = 0;
int i , j = 0 ;
int x = 0;
char temp[100];
char word[100];
for( i = 0; str[i]!='\0'; i++)
{
    j = 0;
    while( str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
    {
        word[j++] = str[i++];
    }
     word[j] = '\0';
        if( j == 0)
        continue;
         count = 0;
        for(int k = 0; str[k]!='\0'; k++)
        {
            int m = 0;
            while(str[x] == word[m])
            {
                x++;
                m++;
            }
            if(word[m] == '\0' && (str[x] == ' ' || str[x] == '\n' || str[x] == '\0') )
            count++;
        }
    
        
        if(count > maxcount)
        {
            maxcount = count;
            strcpy(temp , word);
        }
    }


printf("word with maximum frequency = %s" , temp);

 return 0;
}