/*
Data types determine what kind of data a variable can hold, how much memoryit occupies, and what operations can be performed on it.
*/
#include <stdio.h>
/*
While C does not have a built-in boolean type in its original form, C99 introduced the stdbool.h header, 
allowing for the use of bool, true, and false.
*/
#include <stdbool.h> 

int main(){

    /*
    ---- INTEGER TYPES ----
    */ 
    int a = 10; // Standard integer - 4 bytes 
    short b = 20; // Short integer - 2 bytes 
    long c = 30000; // Long integer - 4/8 bytes allow large number 
    long long d = 9000000000; // Long long integer - 8 bytes very large number 

    // Print the value
    printf("a (int): %d\n", a); // %d 
    printf("b (short): %d\n", b); // %d
    printf("c (long): %ld\n", c); // %ld 
    printf("d (long long): %lld\n", d); // %lld
    
    /*
    ---- CHARACTER TYPES ----
    */
    char letter = 'A'; // store a single characters - 1 byte unsigned 
    unsigned char u_char = 250; // Unsigned char (value range 0-250)
    signed char s_char = -5; // Signed char (value range -128 - 127 )

    // Print the value 
    printf("letter: %c\n", letter); // %c
    printf("u_char: %u\n", u_char); // %u
    printf("s_char: %d\n", s_char); // %d
    
    /*
    ---- FLOATING TYPES ----
    */
    float f = 3.14f; // Float - 4 bytes 
    double d1 = 3.14159265358979; // Double - large decimal number - 8 bytes 
    long double ld = 3.14L;  // Long double - 12 bytes 
    // Print the values
    printf("f (float): %.2f\n", f);        // Displays 2 decimal places
    printf("d (double): %.14lf\n", d1);     // Displays 14 decimal places
    printf("ld (long double): %.2Lf\n", ld); // Displays 2 decimal places for long double
    
    /*
    ---- BOOLEAN TYPES ----
    */
   // Boolean type
    bool is_valid = true;  // Boolean variable initialized to true 
    // Print the boolean value (1 for true, 0 for false) 
    printf("is_valid: %d\n", is_valid);  // Prints 1 if true, 0 if false 

    
    
    return 0;
}