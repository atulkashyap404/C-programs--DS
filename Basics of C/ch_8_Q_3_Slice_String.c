#include<stdio.h>
#include<string.h>

void sliceString(char str[], int n, int m);

int main()
{
    char str[]="Helloworld";
    sliceString(str, 3, 6);


    return 0;
}

void sliceString(char str[], int n, int m){
char newStr[100];
int j = 0;
for (int i = n;i <=m; i++, j++)
{
    newStr[j] = str[i];
}
newStr[j] = '\0';
puts(newStr);
    
}