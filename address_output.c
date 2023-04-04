#include<stdio.h>
 // call by value
 //void printAddress(int n);

//call by Reference
 void printAddress(int *n);

int main(){

    //  int n = 4;
    //  printf("%p\n", &n);
    //  printAddress(n);


    int n = 4;
    printAddress(&n);
    printf("%u\n", &n);




    return 0;
}

// void printAddress(int n){

//     printf("%p\n", &n);

// }


void printAddress(int *n){

    printf("%u\n", n);

}