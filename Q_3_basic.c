#include<stdio.h>
// write a function to Print "Hot" or Cold depend on the temperature user enters.
int climateCondition(int n);

int main(){
    int n;
    printf("Ente the Tempreture n : ");
    scanf("%d",&n);

    climateCondition(n);

    return 0;
}


int climateCondition(int n){

    if (n < 25)
    {
        return printf("Cold");
    }
    if (n > 25)
    {
        return printf("Hot");
    }
    

}