#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base;
    int exponent;
    
    printf("Enter base: ");
    scanf("%lf", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    printf("%.2f ^ %d = %.2f\n", base, exponent, power(base, exponent));
    
    return 0;
}

double power(double base, int exponent) {
    double result = 1;
    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}
