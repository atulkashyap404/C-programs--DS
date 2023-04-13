#include<stdio.h>
#include<stdlib.h>
/* 
Dynamic Memory Allocation
-> It is a way to allocate memory to a data structure during the runtime.

-> We need some function to allocate & free memory dynamically.


-> Function for DMA

a. malloc() --> memory Allocation

b. calloc() --> continuse Allocation

c. free() --> free

d. realloc() --> Re-Allocation



a. malloc()
memeory allocation 
take number of bytes to be allocated & returns a pointer of type void

ptr = (int*) malloc(5 * sizeof(int));



b. calloc()
continuous allocation

initializes with 0

ptr = (int *) calloc(5, sizeof(int));




c. free()

We use it  to free memory that is allocated usning malloc & calloc

free(ptr);


d. realloc()

reallocate (increase or decrease) memory usin the same pointer & size.

ptr = realloc(ptr, newSize);





*/

int main(){

    // *********a. malloc()*************
    // int *ptr;
    // ptr = (int *) malloc(5 * sizeof(int));

    // ptr[0] = 5;
    // ptr[1] = 7;
    // ptr[2] = 8;
    // ptr[3] = 9;
    // ptr[4] = 3;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Value is : %d\n", ptr[i]);
    // }


    //--> WAP to allocate memeory to store 5 prices.
    // *********a. malloc()*************
    // float *ptr;
    // ptr = (float *) malloc(5 * sizeof(float));

    // ptr[0] = 5;
    // ptr[1] = 7;
    // ptr[2] = 8;
    // ptr[3] = 9;
    // ptr[4] = 3;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Value is : %f\n", ptr[i]);
    // }
    // *********b. calloc()*************

    // int *ptr;
    // ptr = (int *) calloc(5, sizeof(int));

    // // ptr[0] = 5;
    // // ptr[1] = 7;
    // // ptr[2] = 8;
    // // ptr[3] = 9;
    // // ptr[4] = 3;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Value is : %d\n", ptr[i]);
    // }

    // *********b. calloc()*************
    // WAP to allocate memeory of size n, where n is entered by the user.

    // int *ptr;
    // int n;
    // printf("Enter the size plz n : ");
    // scanf("%d", &n);
    // ptr = (int *) calloc(n, sizeof(int));

    // // ptr[0] = 5;
    // // ptr[1] = 7;
    // // ptr[2] = 8;
    // // ptr[3] = 9;
    // // ptr[4] = 3;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Value is : %d\n", ptr[i]);
    // }



    // *********b. free()*************

    //---> free the memory allocated with calloc.

    // int *ptr;
    // int n;
    // printf("Enter the size plz n : ");
    // scanf("%d", &n);
    // ptr = (int *) calloc(n, sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Value is : %d\n", ptr[i]);
    // }

    // free(ptr);

    // printf("********************************\n");
    // ptr = (int *) calloc(2, sizeof(int));

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Value is : %d\n", ptr[i]);
    // }
    

    // *********b. realloc()*************
    //--> Allocate mempory for 5 numbers. Then dynamically increase it to * numbers.

    // int *ptr;
    // ptr = (int *) calloc(5, sizeof(int));
    // printf("Enter the size :  ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }
    
    // ptr = realloc(ptr,  8);
    // printf("Enter the size :  ");
    // for (int i = 0; i < 8; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }

    // //print
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d", ptr[i]);
    // }


    //--> Create an array of size 5(using calloc) & enter its values from the user.
    
    // int *ptr;
    // ptr = (int *) calloc(5, sizeof(int));
    // printf("Enter the size :  ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }

    // //print
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d", ptr[i]);
    // }


    //---> Allocate memeory to store first 5 odd numbers, then reallocate it to store first 6 even number.

    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int  i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("even numbers\n");
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    
    // pritn 
    for (int  i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);


    return 0;
}