#include<stdio.h>

int factorialOfN(int n);

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial of n is : %d", factorialOfN(n));

    return 0;
}

int factorialOfN(int n){
    if(n == 1){
        return 1;
    }
    int fact = factorialOfN(n-1)*n;
    
    return fact;
}


