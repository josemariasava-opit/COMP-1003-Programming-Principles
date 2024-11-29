/*
1. Create a structure called "Student" with members name, age, and total marks. 
Write a C program to input data for two students, display their information,
 and find the average of total marks.
*/
#include <stdio.h>

// Definition of structure "Student"
struct Student
{
    char name[50];
    int age;
    float totalMarks; 
};

int main(){

    // declare 2 structure s1,s2 
    struct Student s1,s2;

    //Input data for student 1 
    printf("Input the data for student 1 \n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Age: ");
    scanf("%d", &s1.age);
    printf("Total Marks: ");
    scanf("%f", &s1.totalMarks);

    //Input data for student 2 
    printf("Input the data for student 2 \n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Age: ");
    scanf("%d", &s2.age);
    printf("Total Marks: ");
    scanf("%f", &s2.totalMarks);

    printf("Student 1 information :\n");
    printf("Name: %s - Age: %d - Total Marks: %f\n", s1.name,s1.age,s1.totalMarks);

    printf("Student 2 information :\n");
    printf("Name: %s - Age: %d - Total Marks: %f\n", s2.name,s2.age,s2.totalMarks);

    // Calculate and display the average total marks
    float average = (s1.totalMarks + s2.totalMarks)/2;
    printf("The average value for the 2 students is: %f", average);

}
