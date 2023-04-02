#include<stdio.h>

void printHello(int count);



int main(){
    int n;
    printf("Enter the number how many times print : ");
    scanf("%d",&n);
    printHello(n);



    return 0;
}

// Recursive Function
void printHello(int count){
    if(count == 0){

        return;
    }
    printf("Hello World\n");
    printHello(count-1);
}