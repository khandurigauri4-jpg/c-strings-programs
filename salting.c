// making salted form of user's password
#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main() {
    char pass[100];
    printf("enter your password \n");
    fgets(pass, 100 , stdin);
    pass[strcspn(pass , "\n")] = '\0';
    salting(pass);
    return 0;
}
void salting(char password[])
{
    char salt[] = "123";
    char str[100];
    strcpy(str,password);
    strcat( str , salt);
    printf("salted form of the password is \n");
    puts(str);
}