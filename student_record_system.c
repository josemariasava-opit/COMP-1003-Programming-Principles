/*
Scenario: Student Record Management System

Objective: Develop a C program that demonstrates your understanding of arrays, complex data structures, and functions. This exercise will test your ability to handle real-world scenarios by creating a practical student record management system.

In this assessment, you are required to design and implement a Student Record Management System using the C programming language. This system should allow the user to manage student records and invoke various management functions.

Each student record must include:

Name (string): The full name of the student.
Age (integer): The age of the student.
GPA (float): The Grade Point Average of the student.
Student ID (integer): A unique identifier for each student.
Instructions:

1. Define a Student Structure:

Create a struct to represent a student with the specified fields.
2. Implement the Functions:

Implement the following functions to manage student records:

addStudent: Adds a new student to the system.
searchStudentByID: Searches for a student by their ID and returns the corresponding record.
displayStudents: Displays all student records in the system.
3. Create the Main Program:

In the main function, create an array of 50 elements to store student records.
Implement a menu system to allow users to select actions:
Add Student
Search Student by ID
Display All Students
Quit
Use loops and control structures to handle user input and function calls.

*/
#include <stdio.h> // include standard IO library 
#include <stdbool.h> // include standard bool library to handle boolean type 

// 1. Define the student struct 
struct Student{
    char name[50]; // member name, type char | The full name of the student.
    int age;  // member age, type int | The age of the student.
    float gpa; // member gpa - Grade Point Average , type float 
    int id; // member ID, type int | A unique identifier for each student.
};

// 2. Define the functions 

//All the functions are void because manipulates data stored in an array of student, rather than return a specific value 
void addStudent(struct Student students[], int *pCounter);
void searchStudentByID(struct Student students[], int counter);
void displayStudents(struct Student students[], int counter);

int main(){ 
    // Define array of students
    struct Student students[50];
    int count = 0; //counter of students
    int choice; // choice of the user, will be used in switch-case statement
    //int *pCount = NULL;

    //pCount = &count;

    bool run = true; // var to run the loop menù 

    // while loop - continue until the run var is true 
    while (run)
    {
        printf("\n### Student Record Management System ###\n");
        printf("1: Add a new student \n");
        printf("2: Search Student by ID\n");
        printf("3: Display All Students\n");
        printf("4: Quit\n");
        printf("5: Display number of record -- DEBUG ONLY --\n");
        printf("Select your choice\n--------------------------------------------\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students,&count);
            break;
        case 2:
            searchStudentByID(students,count);
            break;
        case 3:
            //displayStudents(students, count);
            break;
        case 4:
            printf("Goodbye! See you next time\n");
            run = false;
            break;
        case 5:
            printf("Number of record = %d \n", count);
            break;
        default:
            printf("Invalid input. Try Again with one from the menù. \n");
            break;
        }
    }
    return 0;
}

/*
Add student
*/
void addStudent(struct Student students[], int *pCounter){ 

    // safety first - max n.50 student records   
    if(*pCounter >= 50){
        printf("Max number of student reached!\n");
    }

    // Ask the user to input the data for the new record of student 
    printf("Enter student name: ");
    fgets(students[*pCounter].name,sizeof(students[*pCounter].name),stdin); //fgets() allows to handle separated space names

    printf("Enter student age: ");
    scanf("%d", &students[*pCounter].age); // store age record

    printf("Enter student GPA: "); 
    scanf("%f", &students[*pCounter].gpa); // store GPA record

    printf("Enter student ID: ");
    scanf("%d", &students[*pCounter].id);

    printf("Record for student with ID:%d saved successfully\n", students[*pCounter].id);
    (*pCounter)++;
}

/*
Input the user ID and get back all the information and record of the requested sudent. 
*/
void searchStudentByID(struct Student students[], int counter){

    int searchId;
    printf("Enter ID of the student: ");
    scanf("%d", &searchId);

    // Loop all the students to search the requested ID
    for (int i = 0; i < counter; i++ ){ 
        // check if ID by user match the ID of one of the students 
        if(students[i].id == searchId){
            // print all the information about the student
            printf("Name:%s\n", students[i].name);
            printf("Age:%d\n", students[i].age);
            printf("GPA:%f\n",students[i].gpa);
            printf("ID:%d\n", students[i].id);
            return;
        }
    }
    // Notify the user that the requested user does not exist
    printf("The student with ID: %d does not exist.\n", searchId);

}


void displayStudents(struct Student students[], int counter){
    // Safety first, if we don't have record display a message to the user
    if(counter == 0){
        printf("");
    }

    for (int i = 0; i < counter; i++)
    {

    }
}