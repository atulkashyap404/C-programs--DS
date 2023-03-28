#include<stdio.h>
int main(){

    /*Loop Control Instructions
    To repeat some parts of the program

    types

    1. for loop
    ex. ----------
    for (int i = 1; i <= 5; i++)
   {
        printf("Hello for loop\n");
   }

   for (int i = 1; i <= 10; i++)
   {
        printf("%d\n", i);
   }

     for (int i = 0; i <= 10; i++)
   {
        printf("%d\n", i);
   }
----------------------------------------
    2. while loop
    --------------
     int  i  = 1;
   while (i <= 5)
   {
    printf("%d\n",i);
    i++;
   }


   int  i  = 0;
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
   while (i <= n)
   {
    printf("%d\n",i);
    i++;
   }
   ------------------------------------
    3. do while loop
    -------------------
    int i = 1;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i <= 5);

    
    

   // Practice Questions 15

   // Print the sum of first n Natural Numbers.

   int num, sum = 0;
   printf("Enter the  Natural number :");
   scanf("%d",&num);

   for (int i = 1; i <= num; i++)
   {
        sum +=i;
   }
   printf("The sum of n natural Number is : %d",sum);

    

   int num;
   printf("Enter the  Natural number :");
   scanf("%d",&num);

   for (int i = num; i >= 1; i--)
   {
        printf("%d\n",i);
   }
---------------------------------------
int num, sum = 0;
   printf("Enter the  Natural number :");
   scanf("%d",&num);

   for (int j = num; j >= 1; j--)
   {
        sum +=j;
        printf("%d\n",j);
   }
   printf("Sum of n natural numbe is : %d", sum);



   

  int num;
   printf("Enter the number :");
   scanf("%d",&num);

   for (int i = 1; i <= 10; i++)
   {
        printf("%d\n",num*i);
   }
   

   for (int i = 0; i < 4; i++)
   {
          for (int j = 0; j < 5; j++)
          {
               printf("*");
               
          }
          printf("\n");
   }

   */

  int num;
  printf("Enthe the number: ");
  scanf("%d",&num);
  if (num % 2 == 0)
  {
     printf("Not a Prime Number");
  }
  else
  {
     printf("A Prime Number");
  }
  
  
   
    
    
  
   
 
   

    return 0;
}