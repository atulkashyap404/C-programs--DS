#include<stdio.h>
#include<string.h>
// Structure --> a collection of value of diffrent data type

//Example
//for a student store the following :

// name(String)
// roll no(integer)
// cgpa(float)

//Symtax

struct student{

    char name[100];
    int roll;
    float cgpa;
};


int main(){

struct student s1;

s1.roll = 14;
s1.cgpa = 8.9;
strcpy(s1.name, "Atul");

printf("Student Name : %s \n", s1.name);
printf("Student Roll No. : %d \n", s1.roll);
printf("Student CGPA is : %f \n", s1.cgpa);


return 0;

}