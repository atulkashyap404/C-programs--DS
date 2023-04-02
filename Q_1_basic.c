#include<stdio.h>
// Write a function to find sum of digits of a number.
int sumOfDigits(int a, int b);

int main(){
    int a, b;
    printf("Ente the vale of a : ");
    scanf("%d",&a);
    printf("Ente the vale of b : ");
    scanf("%d",&b);

    printf("Sum of digits of a number : %d", sumOfDigits(a,b));

    return 0;
}


int sumOfDigits(int a, int b){

    int sum = a + b;

    return sum;
}