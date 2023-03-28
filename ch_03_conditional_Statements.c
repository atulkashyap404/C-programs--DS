#include<stdio.h>
int main(){

    /*
    Conditional Statements

    if else         switch
    ----------------------
    if(condition){
        //do somthing if ture
    }
    else{
        //do somthing if false
    }


    
   


   int age;
   printf("enter age : ");
   scanf("%d",&age);

   if (age > 18)
   {
     printf("Adult \n");
     printf("they can vote \n");
     printf("they can drive \n");

   }
   else{
    printf("not adult \n");
   } 
    
    if ( condition )
    {
         code 
    }
    else if ( condition )
    {
         code 
    } 


        int age;
   printf("enter age : ");
   scanf("%d",&age);

   if (age >= 18)
   {
     printf("Adult \n");
     printf("they can vote \n");
     printf("they can drive \n");
   }
   else if(age > 13 && age < 18){
    printf("Teenager \n");
   }
   else
   {
        printf("child");
   } */
    
    // <---- Conditional Operators------>
    /*
    Ternary

    Condition ? doSomthing if TRUE : doSomthing if FALSE;

    

   int age;
   printf("enter age : ");
   scanf("%d",&age);

   age >= 18 ? printf("Adult \n") : printf("No adult \n");

   */

  // <---- Conditional Operators------>
    /*
    Switch

    switch(number){

        case c1: //do somthing
        brake;
        case c1: //do somthing
        brake;
        case c1: //do somthing
        brake;
        default: //do somthing
    }


    
   int day; //day 1 = Monday like that
   printf("Enter the day \n");
   scanf("%d",&day);

   switch(day){

        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default : printf("Invalid input Day");
   }
    
    //cheking latter is upper case or lower case

    char ch;
    printf("Enter the charector : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Upper case \n");
    } else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lower case \n");
    }
    else
    {
        printf("Not english letter \n");
    }    


        //------Home work Set------
        A. write a program to check if a given number is Armstrong number or not.

        int num,rem,num_sum = 0,temp;
        printf("Enter the Number : ");
        scanf("%d",&num);
        temp = num;
        while (num > 0)
        {
            rem = num % 10;
            num_sum+=rem*rem*rem;
            num = num / 10;
        }
        if (temp == num_sum)
        {
            printf("Number is Armstrong");
        }
        else
        {
            printf("Number is Not Armstrong");
        }   
        -------------------------------------------
        B. write a program to check if the given number is a natural number 
        
        
       int num;

        printf("Enter the number : ");
        scanf("%d",&num);
        if (num > 0)
        {
            printf(" Number is Natural Number");

        }
        else
        {
            printf("Number is Not a Natural number");
        }

        */
        
        
        
        
        
        
    
    


    
   

    return 0;
}