#include<stdio.h>

float celsiusToFahrenheit(float cel);

int main(){
    float cel;
    printf("Enter the Celsius value: ");
    scanf("%f",&cel);
    printf(" Celsius to Foohrenheit Answer is : %f f", celsiusToFahrenheit(cel));


    return 0;
}

float celsiusToFahrenheit(float cel){

    float fohrenheit = cel * (9.0/5.0) + 32;

    return fohrenheit;

}




