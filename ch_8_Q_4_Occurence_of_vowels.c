#include<stdio.h>
#include<string.h>

// int countVovels(char str[]);
void findChar(char str[], char ch);
int main()
{
    // char str[] = "Helloworld"; 
    // printf("Vovel are : %d", countVovels(str));

    char str[]="Helloworld";
    char ch = 'v';
    findChar(str, ch);

    return 0;
}

void findChar(char str[], char ch){

    for (int i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("charecter is present");
            return;
        }
        
    }
    printf("Charecter is not present");
    



}
// int countVovels(char str[]){

//     int count = 0;

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             count++;
//         }
        
//     }

//     return count;
    
// }
