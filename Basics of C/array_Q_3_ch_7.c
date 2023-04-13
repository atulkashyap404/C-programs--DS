#include<stdio.h>


//print fibonacci sequence by using array
int main(){
 int n;
 printf("Enter the number n (n>=2): ");
 scanf("%d", &n);

 int fib[n];
 fib[0] = 0;
 fib[1] = 1;

 for (int  i = 2; i < n; i++)
 {
    fib[i] = fib[i-1] + fib[i-2]; //important
    printf("%d \t", fib[i]);
 }
 printf("\n");



    return 0;
}