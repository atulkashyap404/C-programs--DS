#include<stdio.h>

//Array Collectio of similar data type stored at contiguous memeory location.

//Function Declaration for Array.
// void printNumber(int arr[], int n);


// function Declaration for pointer array.
// void printNumber(int *arr, int n);

int main(){

// int marks[3];
// char name[10];
// float prrice[2];

// int marks[3];

// printf("Entet the phy: ");
// scanf("%d", &marks[0]);
// printf("Entet the ch: ");
// scanf("%d", &marks[1]);
// printf("Entet the math: ");
// scanf("%d", &marks[2]);

// printf("Phy  = %d, ch = %d, Math  = %d", marks[0], marks[1], marks[2]);

// Q. write a program to enter price of 3 items & print their final cost with gst.

// float price[3];

// printf("Entet the 3 prices : ");
// scanf("%f",&price[0]);
// scanf("%f",&price[1]);
// scanf("%f",&price[2]);
// printf("total price of 1 : %f", price[0]+(0.18*price[0]));
// printf("total price of 2 : %f", price[1]+(0.18*price[1]));
// printf("total price of 3 : %f", price[2]+(0.18*price[2]));


//*******Initialization of Array***********

// int marks[]={1, 3, 4, 5, 7};

// int marks1[3]={97, 94, 98};


//*********Pointer Arithmetic****************
// Pointer can be increased & decsreased 
//Case 1

// int age = 22;
// int *ptr  = &age;
// printf("ptr = %u\n", ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr--;
// printf("ptr = %u\n", ptr);

// float price = 20.00;
// float *ptr = &price;
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr--;
// printf("ptr = %u\n", ptr);


// char star = '*';
// char *ptr = &star;
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr++;
// printf("ptr = %u\n", ptr);
// ptr--;
// printf("ptr = %u\n", ptr);

//*****we can also subtrsct one pointer from another

// int age = 22;

// int _age = 23;

// int *ptr = &age;
// int *pt = &_age;

// printf("age ptr address = %u, _age ptr address = %u, diffrence = %d ", ptr, pt, ptr-pt);

// pt = &age;

//********* we can also compare 2 pointers
// printf("Comparison = %u\n", ptr == pt);


//*******Array is a Pointer 
// int arr[10];
// int *ptr = &arr[0];
// int *ptr = arr;

//******Traverse an Array

// int aadhar[5];

// //input
// int *ptr = &aadhar[0];
// for (int i = 0; i < 5; i++)
// {
//     printf("%d index : ", i);
//     scanf("%d", &aadhar[i]);
// }

// //output
// for (int i = 0; i < 5; i++)
// {
//     printf("%d index = %d\n", i, aadhar[i]);
// }

//**********Array as Function Argument

//Function Declaration
// void printNumber(int arr[], int n);
//             OR
// void printNumber(int *arr[], int n);



// Function Call
// printNumber(arr, n);

// int arr[]={1, 2, 3, 4, 5, 6}; 
// printNumber(arr, 6);

// Function Call for pointer array
// int arr[]={1, 2, 3, 4, 5, 6};
// printNumber(arr, 6);

//**********<<<<<Multidimentional Array>>>>>>>>>************
// 2 D Array

// int arr[][]={{1,2},{3,4}}; //Declare

//Access

// arr[0][0]
// arr[0][1]
// arr[1][0]
// arr[1][1]


int marks[2][3]; //storing two students marks

//first student marks
marks[0][0] = 70;
marks[0][1] = 80;
marks[0][2] = 90;

//Second student marks
marks[1][0] = 40;
marks[1][1] = 50;
marks[1][2] = 60;

printf(" first student mark 1 : %d\n", marks[0][0]);



    return 0;
}


// function definition for array

// void printNumber(int arr[], int n){

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \t", arr[i]);
//     }
    
// }



// function definition for array pointer
// void printNumber(int *arr, int n){

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \t", arr[i]);
//     }
    
// }