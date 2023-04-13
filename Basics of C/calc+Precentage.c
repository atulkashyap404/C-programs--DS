#include<stdio.h>

int calcPercentage(int sc, int math, int sanskrit, int computer);

int main(){
    int sc, math, sanskrit, computer;
    printf("Enter the Science = sc marks : ");
    scanf("%d",&sc);
    printf("Enter the Math marks : ");
    scanf("%d",&math);
    printf("Enter the Sanskrit marks : ");
    scanf("%d",&sanskrit);
    printf("Enter the Computer marks : ");
    scanf("%d",&computer);

    printf(" Overall Percentage : %d ", calcPercentage(sc, math, sanskrit, computer));

    return 0;
}

int calcPercentage(int sc, int math, int sanskrit, int computer){


    return (sc + math + sanskrit + computer) / 4; 
}

