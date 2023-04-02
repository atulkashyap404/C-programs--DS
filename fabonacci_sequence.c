#include<stdio.h>

int fibonacciSequence(int n);


int main(){
    int n;
    printf("enter the Numgber : ");
    scanf("%d",&n);
    printf(" %d ",fibonacciSequence(n));
    // fibonacciSequence(n);

    return 0;
}

int fibonacciSequence(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibN1 = fibonacciSequence(n-1);
    int fibN2 = fibonacciSequence(n-2);
    int fibN = fibN1 + fibN2;
    // printf(" %d , %d ", n, fibN);

    return fibN;
}



