/*
. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/
#include <stdio.h>

int main(){

    int elements,i,sum; 

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &elements); // store value from user 

    int array[elements]; // array declaration 

    printf("Input %d number of elements in the array: \n", elements);

    //Iterate n time the size of the array adn store data
    for ( i = 0; i < elements; i++)
    {
        printf("Element %d : ", i );
        scanf("%d", &array[i]);
        sum+= array[i];
    }

    printf("Sum of all elements stored in the array is: %d\n", sum);

    return 0;
}