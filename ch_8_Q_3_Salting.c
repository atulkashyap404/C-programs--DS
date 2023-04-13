#include<stdio.h>
#include<string.h>

void saltingPassword(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);
    saltingPassword(password);


    return 0;
}

void saltingPassword(char password[]){

    char salt[] = "123";
    char newPassword[200];
    strcpy(newPassword, password);
    strcat(newPassword, salt);
    puts(newPassword);
}