#include<stdio.h>
//declaration/prototype

// void printHello();
// void goodBye();

// void namaste();
// void bonjour();

// int sumOfNumber(int a, int b);

    //void tablePrint(int n);

    // void productPrice(float price);
    
    float SquareArea(float side);
    float CircleArea(float radius);
    float ReactangleArea(float len, float bre);



int main()
{

    float side = 4;
    float radius = 2;
    float len = 6, bre = 4;

    printf("Area of Square : %f\n", SquareArea(side));

    printf("Area of Cirlce : %f\n", CircleArea(radius));

    printf("Area of Rectangel : %f\n", ReactangleArea(len, bre));










    /*

    float price = 100.0;

    productPrice(price);




    int n;
    printf("Eenter the numbe : ");
    scanf("%d", &n);

    tablePrint(n);





    int a, b;

    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);

    int sum = sumOfNumber(a, b);
    printf("Sum Of two Number : %d", sum);





    printf("Enter I for Indian and F for french : ");
    char ch;
    scanf("%C",&ch);

    if (ch == 'I')
    {
        namaste();
    }
    else if(ch == 'F'){
        bonjour();
    }
    else
    {
        printf("Plz entre capital I or capital F");
    }
    */
    

    /*
    //Function Call
    printHello();
    goodBye();
    */
   
   //Passing Arguments
//    function can take value & give some value
    // parameter                    return value

    // Passing Arguments 

    // void printHello(); 

    // void printTable(int n);

    // int sum(int a, int b);















    return 0;
}

    float SquareArea(float side){

        return side * side;
    }

    float CircleArea(float radius){

        return 3.14 * radius * radius;
    }

    float ReactangleArea(float len, float bre){

        return len * bre;
    }
    
    






















/*

 void productPrice(float price){

        price += (0.18 * price);

        printf("Price is : %f", price);
    }

    void tablePrint(int n){

        for(int i = 1; i <= 10; i++){

            printf("%d\n", i * n);
        }
    }






int sumOfNumber(int x, int y){

        return x + y;
    }







void namaste(){
    printf("Namaste Apka Swagat hai");
}

void bonjour(){
    printf(" hello and Bonjour");
}
*/

/*
//function definition
void printHello(){
    printf("Heloo Wolrd\n");
}

void goodBye(){
    printf("Good Bye");
}
*/