/*
Write a C program to apply and test your understanding of control structures, such as else , for , while , do-while , and switch , through an interactive calculator. 
The program should repeatedly prompt the user to input two integers and an operation symbol (+, -, *, /) or 'q' to quit.

Instructions:
Create a C program that:
Prompts the user to input two integers, x and y.
Prompts the user to input an operation symbol (+, -, *, /) or 'q' to quit.
Uses a switch statement to perform the corresponding operation and display the result.
Terminates the program if the user inputs 'q'.
Displays an error message if the operation symbol is not valid.
Repeats the process until the user chooses to quit.

*/

// include standard IO library to handle I/O 
#include <stdio.h> 
// include standard bool library to handle boolean type 
#include <stdbool.h>


int main(){

    // integer type variables declaration - assign 0 to both
    int x = 0, y = 0; 
   
    // char type variable declaration
    char operation;
    // variable to continue or stop the loop
    bool run = true; // initialize to value true - 1 

    // iterate with while loop until the user insert 'q' as operation - use of boolean var to run/stop the loop. 
    while (run){
    // ask the user for the first number in input and save it in var x 
    printf("Enter the first integer (x) : "); // printf to notify user 
    scanf("%d", &x); // scanf to store the value in var  x

    // ask the user for the second number in input and save it in var y
    printf("Enter the second integer (y) : "); // printf to notify user 
    scanf("%d", &y); // scanf to store the value in var y 
    
    // ask the user for the operation symbol to perform the calculation
    printf("Enter an operation symbol (+, -, *, /) or 'q' to quit : "); // printf to notify user 
    scanf(" %c", &operation); // sanf to store the value in var operation 

    // switch statement to handle all the different condition based on the symbol inserted by user 
    switch (operation)
        {
        case '+':
            printf("%d %c %d = %d \n", x,operation,y, x+y); // + symbol by user, perform addition 
            break;
        case '-':
            printf("%d %c %d = %d \n", x,operation,y, x-y); // - symbol by user, perform subtraction 
            break;
        case '*':
            printf("%d %c %d = %d \n", x,operation,y, x*y); // * symbol by user, perform 
            break;
        case '/':
            printf("%d %c %d = %d \n", x,operation,y, x/y); // / symbol by user, perform 
            break; 
        case 'q': // case with q symbol, notify the user and set the var run to false. Exit the loop and the program
            printf("Goodbye! Run again the software to perform others calculation \n");
            run = false; 
            break;
        default: // default case, notify the user to insert the correct symbol 
            printf("\nWrong input, you have to use one of the following (+, -, *, /) or 'q':  \n");
            break;
        }
    }


    return 0; 
}