/*
Program 1: Circle Calculations

Instructions:

Create a C program that:

Prompts the user to input the radius of a circle.
Ensures the radius is greater than zero.
Calculates and displays the diameter, perimeter, and surface area of the circle.
Uses the PI constant, defined using const or #define.

*/

#include <stdio.h>
#include <math.h> // include math.h to use pow() function 

#define PI 3.14159  // define constant value for PI 

int main(){

    // definition of variables 
    float radius, diameter, perimeter, surface; 

    // Ask the user for input radius 
    printf("Enter the radius of a circle : ");
    // scan & save value from the user
    scanf("%f", &radius);

    // check condition of radius > 0 
    if (radius > 0 )
    {
        diameter = radius * 2;
        perimeter = 2 * PI * radius;
        surface = PI * pow(radius, 2);

        printf(
            "Diameter: %.2f \nPerimeter: %.2f \nSurface Area: %.2f \n", diameter,perimeter,surface
        );
    }
    else
    {
        printf("Wrong value for the radius \n");
    }

    return 0;
}