#include<stdio.h>

/*Write a function to calculate the sum , product & avrage of 2 numbers. Print hat avrage in the main funtion.*/

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
 int a = 2, b = 4;
 int sum, prod, avg;
 doWork(a, b, &sum, &prod, &avg);
printf(" sum = %d, Prod = %d, Avg = %d\n", sum, prod, avg);

    return 0;
}


void doWork(int a, int b, int *sum, int *prod, int *avg){

    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}