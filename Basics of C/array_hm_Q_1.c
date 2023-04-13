#include<stdio.h>

int main(){


    //****Q 3. write a program to insert an element at the end of the array.
    int n, arr[10], add;
    printf("Enter the size of array in  : n --> ");
    scanf("%d", &n);
    printf("Enter the Array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Now enter the new element which is going to add at the last position : ");
    scanf("%d",&add);
    n++;
    arr[n-1] = add;
    printf("After inserting new element at the end of the array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    





    //  int arr[]={1,8,2,3,2,4,5,6,2,7};
    //  int count = 0;
    //  for (int i = 0; i <10; i++)
    //  {
        //Q 1. this logic is for finding largest number in array
        // if (arr[i]>count)
        // {
        //     count=arr[i];
            
        // }

        // Q 2. this logic for finding the occurenc of number x in any array.
    //     if (arr[i]== 2)
    //     {
    //         count++;
    //     }
        
    //  }
    //this logic is for finding largest number in array
    //  printf("%d\t", count);





    //this logic for finding the occurenc of number x in any array.
    // printf(" the number 2  is occurs : %d", count);
     


    return 0;
}