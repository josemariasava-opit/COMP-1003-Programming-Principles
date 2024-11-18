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
// include math library to handle pow method for exponentiation
#include <math.h>
// include string library to handle method for string manipulation 
#include <string.h>

#define MAX_CHAR 15 // max char for the string of username and password 

int main(){

    // integer type variables declaration - assign 0 to both
    int x = 0, y = 0;
    int result = 0; // Temp variable to manage exponential calculation

    // constant variables for default username and password 
    const char *USERNAME = "User";
    const char *PSW = "Strong01";

    // char variable to store username and password from user
    char inputUsername[MAX_CHAR];
    char inputPassword[MAX_CHAR];

    // char type variable declaration
    char operation;
    // variable to continue or stop the loop and the program execution
    bool run = true; // initialize to value true - 1

    // Get username from the user
    printf("Enter your username : ");
    scanf("%s", inputUsername); // scanf to save password in variable 

    // Get password from the user 
    printf("Enter your password : ");
    scanf("%s", inputPassword); // scanf to save password in variable 

    // check if credential by user match default ones
    if (strcmp(USERNAME,inputUsername) == 0 || strcmp(PSW, inputPassword) == 0) // stringcompare function, if returns 0 the string are the same 
    {
    }
    else 
    {
        // Notify user about wrong credential 
        printf("Access Denied! Wrong Credential \n");
        return 0; // Return 0 to stop the execution of the program. 
    }

    // iterate with while loop until the user insert 'q' as operation symbol - use of boolean var to run/stop the loop. 
    while (run){
    // ask the user for the first number in input and save it in var x 
    printf("Enter the first integer (x) : "); // printf to ask the user the input 
    scanf("%d", &x); // scanf to store the value in var  x

    // ask the user for the second number in input and save it in var y
    printf("Enter the second integer (y) : "); // printf to ask the user the input 
    scanf("%d", &y); // scanf to store the value in var y 
    
    // ask the user for the operation symbol to perform the calculation
    printf("Enter an operation symbol (+, -, *, /, %%, ^) or 'q' to quit : "); // printf to notify user which symbol is allowed 
    scanf(" %c", &operation); // scanf to store the value in var operation 

    // switch statement to handle all the different condition based on the symbol inserted by user 
    switch (operation)
        {
        case '+':
            printf("%d %c %d = %d \n", x,operation,y, x+y); // + symbol by user, perform addition and notify user 
            break;
        case '-':
            printf("%d %c %d = %d \n", x,operation,y, x-y); // - symbol by user, perform subtraction and notify user 
            break;
        case '*':
            printf("%d %c %d = %d \n", x,operation,y, x*y); // * symbol by user, perform multiplication and notify user 
            break;
        case '/':
            // Safety first - check if the second number is not 0 (zero)
            if(y != 0){
                printf("%d %c %d = %d \n", x,operation,y, x/y); // / symbol by user, perform division and notify user 
            }
            // Notify user about the wrong input and that is not possible to perform the operation
            else{
                printf("Division by 0 is not possible \n");
            }
            break; 
        case '%':
            // Safety first - check if the second number is not 0 (zero)
            if(y != 0){
                printf("%d %c %d = %d \n", x, operation, y, x % y); // % symbol by user, perform modulus
            }
            else{
            // Notify user about the wrong input and that is not possible to perform the operation
                printf("Modulus by 0 is not possible. \n");
            }
            break; 
        case '^':
            result = pow(x, y);
            printf("%d %c %d = %d \n", x,operation,y, result); // ^ symbol by user, perform power and notify user 
            break;
        case 'q': // case with q symbol, notify the user and set the var run to false. Exit the loop and the program
            printf("Goodbye! Run again the software to perform others calculation \n");
            run = false; 
            break;
        default: // default case, notify the user to insert the correct symbol - this will be executed only if the user insert a symbol that is not in the other case. 
            printf("\nWrong input, you have to use one of the following symbols(+, -, *, /, %%, ^) or 'q':  \n");
            break;
        }
    }


    return 0; 
}