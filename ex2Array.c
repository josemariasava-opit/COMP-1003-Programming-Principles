/*
2. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/
#include <stdio.h>

int main(){ 

    int elements,i; 

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &elements); // store value from user 

    int array[elements]; // array declaration 

    printf("Input %d number of elements in the array: \n", elements);

    //Iterate n time the size of the array adn store data
    for ( i = 0; i < elements; i++)
    {
        printf("Element %d : ", i );
        scanf("%d", &array[i]);
    }

    // Print to terminal the value in real order 
    printf("The values stored into the array are : ");
    for ( i = 0; i < elements; i++)
    {
        printf("%d", array[i]);
    }

    // Print to terminal the values in reverse order
    printf("\nThe values stored into the array in reverse are : ");
    for ( i = elements-1; i >= 0; i--)
    {
        printf("%d", array[i]);
    }
    
    
    



    return 0; 
}