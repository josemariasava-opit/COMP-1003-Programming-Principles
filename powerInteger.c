/*
Create a C program that:

Prompts the user to input an integer that is at least 2.
Computes and displays all the powers of this integer (i.e., 
, 
, 
, ... ) until the result exceeds 9999.
*/

#include <stdio.h>
#include <math.h> // include math.h to use pow() function 

int main(){

    // definition of variables
    int number, power = 1;
    long result = 1;


    // Ensure the inout from user it's at least 2
    do
    {
     // ask input from user 
    printf("Enter an integer (at least 2): ");
    scanf("%d", &number);

    } while (number <= 2);


    while (result <= 9999)
    {

        result = pow(number, power); // calculate result 

        power++; // increment exponent 

        if (result >= 9999) // real condition to break the loop 
        {
            break;
        }
        printf("%d ^ %d = %ld \n", number, power, result); // printing at each iteration the result 
    }

    return 0;
}