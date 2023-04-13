#include<stdio.h>

int sumOfNaturalNum(int n);

int main(){

int n;
printf("Ente the number : ");
scanf("%d",&n);
printf("Sum of first n natural Number : %d", sumOfNaturalNum(n));

    return 0;
}

// Recursive Function
int sumOfNaturalNum(int n){
    if (n == 1)
    {
        return 1;
    }
    
    int sumN1 = sumOfNaturalNum(n-1); // sum of 1 to n
    int ansSum = sumN1 + n;

    return ansSum;

}







