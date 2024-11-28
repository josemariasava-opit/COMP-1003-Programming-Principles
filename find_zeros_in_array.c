/*Instructions:

Create a C program that:

Prompts the user to input the number of elements in an array.
Accepts the elements of the array.
Indicates the positions of all elements with the value zero.
Example Output:

Enter the number of elements in the array: 5
Enter element 1: 3
Enter element 2: 0
Enter element 3: 4
Enter element 4: 0
Enter element 5: 7
Zero found at position 2
Zero found at position 4

*/
#include <stdio.h> // import standardIO class 

int main(){

    int element_number; // var for the size of the array 

    // ask user to enter the size of the array 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &element_number); // save value in var 

    // declaration of array with size by user 
    int element[element_number]; 

    /*loop n times the size of the array to enter 
    the value for each index */ 
    for (int i = 0; i < element_number; i++)
    {
        // ask the value from user 
        printf("Enter element %d : ",i+1); // +1 for 1base indexing 
        scanf("%d", &element[i]); // save value in index i of the array 
    }

    //loop the array to find 0 value in position n 
    for (int i = 0; i < element_number; i++)
    {
        if (element[i]== 0) // check if value is 0 in index=i of array 
        {
         printf("Zero found at position %d \n", i+1);   // print the index of the value 0 in array - +1 for 1base indexing
        }
        
    }
    




    





    return 0;
}