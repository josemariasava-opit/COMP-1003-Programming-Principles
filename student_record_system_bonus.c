/*
Challenge 1: Delete Student Record
Objective: Implement a feature that allows the user to delete a student record by their ID.
Description:
When a student record is deleted, ensure that the array is updated to reflect this change. The deleted record should be removed from the list, and subsequent records should be shifted to fill the gap.
Handle edge cases such as attempting to delete a record that does not exist.
Example scenario: If a user deletes the record with ID 1001, the system should remove that record and update the array accordingly.

Challenge 2: Advanced Search
Objective: Add an advanced search feature that allows the user to search for students by name or within a GPA range.
Description:
Implement a function that enables searching for students either by their full name or by specifying a GPA range (e.g., between 3.0 and 4.0).
The search results should display all matching student records.
Handle cases where no records match the search criteria by providing appropriate feedback to the user.
Example scenario: If a user searches for students named "John Doe" or with a GPA between 3.5 and 4.0, the system should display all records that meet these criteria.
*/

#include <stdio.h> // include standard IO library 
#include <stdbool.h> // include standard bool library to handle boolean type 
#include <string.h>  // include string to handle function like strcspn()

// 1. Define the student struct 
struct Student{
    char name[50]; // member name, type char | The full name of the student.
    int age;  // member age, type int | The age of the student.
    float gpa; // member gpa - Grade Point Average , type float 
    int id; // member ID, type int | A unique identifier for each student.
};

// 2. Define the functions

// All the functions are void because manipulates data stored in an array of student, rather than return a specific value 
void addStudent(struct Student students[], int *pCounter);
void searchStudentByID(struct Student students[], int counter);
void displayStudents(struct Student students[], int counter);
void deleteStudent(struct Student studens[], int *pCounter); // Challenge 1 - Delete Student Record
void advancedSearch(struct Student students[], int counter); // Challenge 2: Advanced Search

int main(){ 
    // Define array of students
    struct Student students[50];
    int count = 0; //counter of students - keeps track of number of student created and stored
    int choice; // choice of the user, will be used in switch-case statement
    //int *pCount = NULL;

    //pCount = &count;

    bool run = true; // var to run the loop menù 

    // while loop - continue until the run var is true 
    while (run)
    {
        printf("\n### Student Record Management System ###\n--------------------------------------------\n");
        printf("1: Add a new student \n");
        printf("2: Search Student by ID\n");
        printf("3: Display All Students\n");
        printf("4: Quit\n");
        printf("5: Challenge 1 - Delete Student Record\n");
        printf("6: Challenge 2 - Advanced Search\n");
        printf("--------------------------------------------\nSelect your choice\n");
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
            displayStudents(students, count);
            break;
        case 4:
            printf("Goodbye! See you next time\n");
            run = false;
            break;
        case 5:
            deleteStudent(students, &count);
            break;
        case 6:
            advancedSearch(students,count);
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

    // Clear buffer input from stdin 
    while(getchar() != '\n'); 

    // Ask the user to input the data for the new record of student 
    printf("Enter student name: ");
    fgets(students[*pCounter].name,sizeof(students[*pCounter].name),stdin); //fgets() allows to handle separated space names

    /*
    Remove the newline character added by fgets - The newline (\n) is part of the string because the user pressed Enter.
    This finds the index of the first newline in the string and replaces it with a null terminator.
    If no newline is found, the string remains unchanged.   
    */
    students[*pCounter].name[strcspn(students[*pCounter].name, "\n")] = '\0';

    printf("Enter student age: ");
    scanf("%d", &students[*pCounter].age); // store age record

    printf("Enter student GPA: "); 
    scanf("%f", &students[*pCounter].gpa); // store GPA record

    printf("Enter student ID: ");
    scanf("%d", &students[*pCounter].id);

    printf("\nRecord for student with ID:%d saved successfully\n", students[*pCounter].id);
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
            printf("GPA:%0.2f\n",students[i].gpa);
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
        printf("No record present - add at least one student record \n");
        return;
    } 

    printf("Here below all the students record inside our system\n");
    for (int i = 0; i < counter; i++)
    {
        printf("Name: %s - Age: %d - GPA: %0.2f - ID: %d \n", students[i].name, students[i].age, students[i].gpa, students[i].id);
    }
}


// Challenge 1 - Delete Student Record
void deleteStudent(struct Student students[], int *pCounter){

    int searchId;
    printf("Enter ID of the student to delete: ");
    scanf("%d", &searchId);

    // Loop through the array to find a record with the matching ID from user.
    for (int i = 0; i < *pCounter; i++ ){ 
        // check if ID by user match the ID of one of the students 
        if(students[i].id == searchId){
            for(int j=i; j<*pCounter-1; j++){ // If the ID is found, shift all next records one position to the left, overwriting the record to be deleted.
                students[j] = students[j+1];
            }
            (*pCounter)--;  // Decrementing pointer to counter - we removed one item from the array of students
            printf("Student with ID: %d deleted! \n", searchId); // notify user that the student does not exist anymore 
            return; 
        }
    }
    // Notify the user that the requested user does not exist
    printf("The student with ID: %d does not exist.\n", searchId);

}

// Challenge 2 - Advanced Search

void advancedSearch(struct Student students[], int counter){

    // var decaration 
    int criteria;
    char searchName[50];
    float min, max;
    printf("1: to search by student name\n2: search within a GPA range\n");
    scanf("%d", &criteria);

    if(criteria == 1){  // search by Name
        printf("Enter the name of the student to search "); // ask user about the name to search 
        getchar(); // Clean the buffer from new line char 
        fgets(searchName,sizeof(searchName),stdin); // get the name by the user 
        searchName[strcspn(searchName, "\n")] = '\0'; // Remove the newline from the input after the use of fgets() 

        // Loop the array of students to search the match of the name
        for (int i = 0; i < counter; i++)
        {
            if(strcmp(students[i].name,searchName)==0){  // compare names with strcmp() if the name searched match one student
                printf("Name: %s - Age: %d - GPA: %0.2f - ID: %d \n", students[i].name, students[i].age, students[i].gpa, students[i].id); // display all student records if name matches
            }
        } 
    }else if (criteria == 2) // search by GPA Range 
    {
        // ask user to enter the range of GPA
        printf("Enter the min value for GPA: ");
        scanf("%f", &min);
        printf("Enter the max value fot GPA: ");
        scanf("%f", &max);

        // Loop the array of students to search the match of the GPA 
        for (int i = 0; i < counter; i++)
        {
            if (students[i].gpa >= min && students[i].gpa <= max) // check if gpa of student[i] is in the range entered by the user 
            {
                printf("Name: %s - Age: %d - GPA: %0.2f - ID: %d \n", students[i].name, students[i].age, students[i].gpa, students[i].id); // display all student records if name matches
            }
            
        } 
    }else
    {
        printf("Invalid choice for advanced search! \n");
    }
}
