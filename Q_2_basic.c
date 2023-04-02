#include<stdio.h>
// write a function to find square root of a number
int squareRoot(int n);

int main(){
    int n;
    printf("Ente the n : ");
    scanf("%d",&n);

    printf("Square Root of a number is  : %d", squareRoot(n));

    return 0;
}


int squareRoot(int n){

    int squarerootans = n * n;

    return squarerootans;
}