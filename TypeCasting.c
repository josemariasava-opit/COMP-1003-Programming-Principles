#include <stdio.h> 


int main() {
    int x = 7; 
    int y = 2; 
    float result;
    // Implicit typecasting
    result = x / y; // Integer division
    printf("Implicit Casting - Result: %f\n", result); // Output: 3.000000 
    // Explicit typecasting
    result = (float)x / y; // Float division
    printf("Explicit Casting - Result: %f\n", result); // Output: 3.500000 
    return 0;
}