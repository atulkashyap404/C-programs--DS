#include<stdio.h>
int main()
{
    //printf("Hello world");   
    // variable initialization
   // int a = 20;
    // update variable
   // a = 30;
   // char star = '*';
    //float f = 1.1;

    //  Variable Data Types 

    // char or signed char = size 1 bytes 
    // unsigned char =  1 bytes
    // int or signed int  = 2 bytes
    // unsigned int  = 2 bytes 
    // short int or Insigned short int = 2 bytes 
    // signed short int =  2 bytes 
    // long int or signed long int =  4 bytes 
    // unsigned long int  =  4 bytes
    // float  =  4 bytes 
    // double  =  8 bytes 
    // long double  = 10 bytes

    //int age  = 22;

    //float pi = 3.14;

    //char hashtag  = '#';

    // Constant values that do not change(fixed)

    // Constant type ------>

    //(1) intteger constant 1,2,3,0,-1,-2
    //(2) real Constant 1.0, 2.0, 3.14, -24
    //(3) charectre constant 'a', 'b', 'A','#','&'

    // Keywords : Reserved words are thata have special meaning to the compiler
    // for example :  32 keywords in C language

    // auto, double, int, struct, brake, else, long, switch,
    // case, enum, register, typedef, char, extern, return, union,
    // continue, for, signed, void, do, if, static, while, default,
    // goto, sizeof, volatile, const, float, short, unsigned.

    // Comments: Line that are not part of Program

    // Single line

    /* Multiple Line */

    //Output

    // printf 

    /* printf("Hello world\n");
    printf("Hello world\n");
    printf("Hello world\n");
    printf("Hello world\n"); */

    // Output Cases
    //1 integers
   // printf("age is %d\n", age);

    //2 real numbers
   // printf("value of pi is %f", pi);

    //3 charecters
    //printf("star looks like this %c", star);

    // Input 

    // scanf("%d", &age); 
    // int age;
    // printf("Enter your age: "); 
    // scanf("%d",&age);
    // printf("age is %d",age);
    /*

    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    int sum = a + b;

    printf("the sum of a and b is %d", sum);*/
    /*
    Practice Qs 1
    1. write a program to calculate area of a square.
    int a, A;
    printf("enter the side a: ");
    scanf("%d",&a);
    A = a*a;
    printf("The are of Square is : %d", A); */
    /*
    Practice Qs 2
    1. write a program to calculate area of a circle.
    formula : A = pi r Square
    pi is here constant value which is 3.14;

    float r, A;
    float pi = 3.14;

    printf("Enter the radius value r: ");
    scanf("%f",&r);
    A = pi*r*r;
    printf("The area of circle is %f", A); */

    /*a. wriite a programe to calculate perimeter of rectangle. take side , a & b, from User 
    formula: P = 2(l+w)
    
   float l, w, P;

   printf(" entre the length and width : ");
   scanf("%f%f",&l,&w);
   P = 2*(l+w);
   printf("the perameter of rectangelis %f: ",P); */

   /*
   b. Take number (n) from user  & output its cube(n*n*n).

   
  int n, A;
  printf(" Enter the value of n: ");
  scanf("%d",&n);
  A = n*n*n;
  printf("The cube value is %d: ",A); */


    return 0;
}