#include<stdio.h>
#include<string.h>

//Strings
//A character array terminated by a \0 (null character)

// null character denotes string termination 

// Example

// char name[] = {'S', 'H', 'R', 'A', 'D', 'H', 'A', '\0'};

// char class[] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'E', 'G', 'E', '\0'};


// void printString(char arr[]);







int main(){

    //Initialising Strings

    // char name[] = {'A', 'T', 'U', 'L', 'K', 'M', 'K', '\0'};

    // char name1[] = "ATULKUMAR";

    //  char class[] = {'A', 'P', 'N', 'A', ' ', 'C', 'O', 'L', 'E', 'G', 'E', '\0'};
 
    //  char class[] = "APNA COLLEGE";

    // char firstname[] = "Atul";
    // char secondname[] = "Kashyap";
    // printString(firstname);
    // printString(secondname);

    //*******String Format Specifier*******

    // char name[50];
    // scanf("%s", name);
    // printf("%s", name);

    //*** Important******

    // scanf() cannot input multi-word string with apaces 

    // here, geta() puts() come into picture

    //String Functions

    /*
    gets(str)-----> Dahgerous & Outdated     puts(str)

    //input a string (even multiword)         //Output a string




    fgets(str, n, file) ---> stops when n-1 chars input or new line is entered.
    
    */

//    char str[100];
// //    gets(str);// do not use thhis gets method because it is outdate
//     fgets(str, 100, stdin);
//    puts(str);

/*
#--> String Using Pointer

-> char *str = "hello World";

stre string in memory & the assigned address is stored in the char pointer 'str'


char *str = "Hello world"; //can be reinitialized.


char str[]="Hello world"; // can not  be reinitialized.





char *canchange = "Atul kumar";
puts(canchange);
canchange = "Atul";
puts(canchange);


char canNotbechange[] = "Atul kumar";
puts(canNotbechange);
//canNotbechange = "atul"; // we cannot change the char array.
*/


/*
#----> Standard Libarary Function

------->   <string.h>  

(1). strlen(str)
count number of character excluding '\0' 

*/
    //**strlen()
    // char name[]="Atul Kumar";
    // int lenght = strlen(name);
    // printf("Lenght is : %d", lenght);

    //**strcpy(newStr, oldStr)
//copies value of old string to new string

    // char oldStr[] = "oldString";
    // char newStr[] = "newString";

    // strcpy(newStr, oldStr);

    // puts(newStr); 


    //** strcat(firstStr, secStr)
//concatenates first string with second string.

    // char firstStr[] = "Atul";
    // char secStr[] = "kumar";
    // strcat(firstStr, secStr);
    // puts(firstStr);

    //** strcmp(firstStr, secStr)

// Compare 2 String & returns a value

// 0-> string equal

// positive -> first > second (ASCII)
// negative -> <second(ASCII)

    char firstStr[] = "String";
    char secStr[] = "Concacte";
    printf("%d\n", strcmp(firstStr, secStr));
    printf("%d\n", strcmp(secStr, firstStr));
    
// 0-> string equal
    printf("%d", strcmp(firstStr, firstStr));





    return 0;
}



















// void printString(char arr[]){

//     for (int i = 0; arr[i] != '\0' ; i++)
//     {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
    

// }