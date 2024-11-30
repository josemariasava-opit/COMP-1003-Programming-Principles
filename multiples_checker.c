/*
Instructions:

Create a C program that:

Prompts the user to input two integers.
Implements a function named isMultiple that:
Takes two integer arguments.
Returns 1 if the first integer is a multiple of the second integer.
Returns 0 otherwise.
Calls the isMultiple function and displays a message indicating whether the first number is a multiple of the second.
*/
#include <stdio.h> // include standarIO library 
#include <stdbool.h> // include bool library to handle boolean type value 

// function to check if num1 is multiple of num2 
bool isMultiple(int num1, int num2){

    // safety first - handle the case of the second number by user is 0 
    if(num2 == 0){
        return false;
    }

    return (num1 % num2 == 0); 
    /*return the value of modulo, if true the num1 is a multiple of  num2 
      if false the num1 is not a multiple of num2
    */
}

int main(){

    int num1, num2; // declaration of variable

    // ask the user to input n1 and store in var num1
    printf("Input the first number: ");
    scanf("%d", &num1);

    // ask the user to input n2 and store in var num1
    printf("Input the second number: ");
    scanf("%d", &num2);

    // call the function and notify user 
    if(isMultiple(num1,num2)){

        printf("%d is a multiple of %d \n", num1,num2); // notify user if n1 is a multiple of n2
    }
    else
    {
        printf("%d is not a multiple of %d - or the value of number 2 is zero \n", num1, num2); // notify user if n1 is not a multiple of n2
    }
}