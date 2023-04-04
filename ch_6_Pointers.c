#include<stdio.h>

// call by value example
// int squareOfN(int n);

//Call by reference example
void _squareOfN(int *num);



// Pointers : A variable that stores the memory address of another variable.
/*
*****Declaring Pointers******

int *ptr;
char *ptr;
float *ptr;

*****Format Specifier****
printf("%p", &age);
printf("%p", ptr);
printf("%p", &ptr);



*/


int main()
{

// Pointers Syntax
// int age = 22;
// int *ptr = &age;
// int _age = *ptr;
// printf("%d",_age);

// *****Format Specifier Example ****
//-- printf("%p\n", &age);//Output is :-(0061FF18) before.
/*Aftre print this we have a issue that we see a last munber so we face dificlty to read that why use use unsigned int (whis is %u) to display the number now */
//printf("%u\n", &age);//output aftre:-(6422296)

// we are try same thing with ptr

//printf("%u\n", ptr);

//now printing addres of ptr.
//printf("%u\n", &ptr);
// printf("%d\n", age);
// printf("%d\n", *ptr);
// printf("%d", *(&age));


//Practice q 36. 

// int *ptr;
// int x;

// ptr = &x;
// *ptr = 0;

// printf("X = %d\n", x);
// printf("*ptr = %d\n", *ptr);

 //*ptr += 5;
// printf(" x = %d\n", x);
// printf(" *ptr = %d",*ptr);

// (*ptr)++;
// printf(" x = %d\n", x);
// printf(" *ptr = %d",*ptr);



//******Pointer to Pointer**********

    // A variable that store the memory address of another pointer.

    //Pointer to Pointer 
//Syntax
// int **pptr;
// char **pptr;
// float **pptr;

// int price = 100;
// int *ptr = &price;
// int **pptr = &ptr;

// int i = 10;
// int *ptr = &i;
// int **pptr = &ptr;
// printf(" 1  i value : %d\n", i);

// printf(" 2 ye i ka address hai : %d\n", &i);

// printf(" 3 ye  yaha ptr ne i ke address ko hold kiya hai : %d\n", ptr);

// printf(" 4 ye ptr ka address hai : %d\n", &ptr);

// printf(" 4.1 yaha dekho i ki value hai ptr pe : %d\n", *ptr);

// printf(" 5 pptr ne ptr ki address ko hold kiya hai : %d\n", pptr);

// printf(" 6 ye pptr li address hai : %d\n", &pptr);

// printf(" 7 yaha aap kedh sakte hai ki pointer to pointer value ko kaise hold kiya hai or i ki value double pointer me bheja gaya hai : %d",**pptr);

//****** Pointer in Function Call ******

// Call by Value                        Call by Reference
// we pass value of as         // we pass address of variable asargument   
//valiable argumnet.                    








// call by value example
// int number = 4;
// squareOfN(number);
// printf("the value of number is not changed: %d", number);



//Call by reference example
int number = 4;
_squareOfN(&number);
printf("now value of number is  changed : %d",number);










    return 0;
}

// call by value example
// int squareOfN(int n){


//     n = n * n;
//     printf("Square of n number: %d\n", n); 
// }


//Call by reference example
void _squareOfN(int *num){

    *num = (*num) * (*num);
    printf("value of *num is : %d\n", *num);
}








