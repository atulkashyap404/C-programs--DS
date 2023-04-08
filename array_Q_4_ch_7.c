#include<stdio.h>

void printTables(int arr[][10], int n, int m, int number);

int main(){
    int tables[2][10];
    printTables(tables, 0, 10, 2);
    printTables(tables, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", tables[1][i]);
    }
    printf("\n");

    return 0;
}

void printTables(int arr[][10], int n, int m, int number){

    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i+1);
    }


}