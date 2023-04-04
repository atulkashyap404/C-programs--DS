#include<stdio.h>
//call by value
// void swapNum(int x, int y);

//call by Reference
void _swapNum(int *a, int *b);

int main(){

    // int a = 2;
    // int b = 4;

    // int *ptra = &b;
    // int *ptrb = &a;

    // printf("value of a is : %d\n", *ptra);
    // printf("value of b is : %d", *ptrb);

//call by value
    // int x = 2, y = 4;
    // swapNum(x, y);
    // printf("  Call By V vale of a : %d and the value of b is : %d", x, y);



//call by Reference
    int a = 2, b = 4;
    _swapNum(&a, &b);
    printf(" Call By R vale of a : %d and the value of b is : %d", a, b);










    return 0;
}

//call by value
// void swapNum(int x, int y){

//     int t;
//     t = x;
//     x = y;
//     y = t;

//     printf(" call By V vale of a : %d and the value of b is : %d\n", x, y);
// } 


//call by Reference
void _swapNum(int *a, int *b){

    int t;
    t = *a;
    *a = *b;
    *b = t;

    printf(" call by R vale of a : %d and the value of b is : %d\n", *a, *b);
}