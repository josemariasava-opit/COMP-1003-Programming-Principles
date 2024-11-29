/*
Instructions:

Create a C program that:

Prompts the user to input the number of rows and columns of a matrix.
Inputs the elements of the matrix.
Prompts the user to input a row number.
Displays the values of all elements in the specified row along with their sum.
Indicates if the row number is outside the valid range.

Enter the number of rows in the matrix: 3
Enter the number of columns in the matrix: 4
Enter element at [0][0]: 1
Enter element at [0][1]: 2
Enter element at [0][2]: 3
Enter element at [0][3]: 4
Enter element at [1][0]: 5
Enter element at [1][1]: 6
Enter element at [1][2]: 7
Enter element at [1][3]: 8
Enter element at [2][0]: 9
Enter element at [2][1]: 10
Enter element at [2][2]: 11
Enter element at [2][3]: 12
Enter the row number to display: 1
Elements of row 1: 5, 6, 7, 8
Sum of elements in row 1: 26
*/
#include <stdio.h>

int main(){ 

    int rows,columns,i,j,sum,display_row; // declaration of variables 

    // ask user to input the number of rows 
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows); // store value 

    // ask user to input the number of columns  
    printf("Enter the number of columns  in the matrix: ");
    scanf("%d", &columns); // store value 

    // declaration of matrix, 2 dimensional array
    int matrix[rows][columns];

    // nested for to enter all the values for each element inside the matrix array 
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter the element at position [%d][%d] : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the row number to display: "); // ask the user to insert the row number to display 
    scanf("%d", &display_row); // store value in var 

    // Safety first - notify user if the row is not in the range of matrix 

    if (display_row < 1 || display_row > rows) // condition to check the range 
    {
        printf("Row number is outside of the valid range of the matrix! \n"); 
    }
    else
    {
        printf("Elements of row number %d: ", display_row); 
        for (j = 0; j < columns; j++) // iterate only the row inserted by user 
        {
            printf("%d", matrix[display_row-1][j]); // print value in row by user 
            sum+= matrix[display_row-1][j]; // calculate sum of all elements 
        }

        printf("\nSum of elements in row number %d = %d", display_row, sum); // notify user with the sum
        
    }
    
    


    


    return 0;
}