// count vowels in a string
#include <stdio.h>
#include <string.h>
int countvowels(char s[]);
int main() {
    char string[100];
    printf("enter a string \n");
    fgets(string , 100 , stdin);
    string[strcspn( string , "\n")] = '\0';
    printf("string is \n");
    puts(string);
    int c = countvowels(string);
    printf("number of vowels = %d" , c);

    return 0;
}
int countvowels(char s[])
{
    char ch;
    int count = 0;
    int l = strlen(s);
    for(int i =0; i<l; i++)
    {
        ch = s[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch =='u')
        count++;
    }
    return count;
}