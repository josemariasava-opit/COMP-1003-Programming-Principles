/*
Practice Assignment 4: 
Designing Decimal to Binary Number Converter Using CT
*/
#include <stdio.h>

int main(){

/*  Summary Idea 
1 - ask the user to insert decimal number 
2 - store the data 
3 - Divide the given number repeatedly by 2 until the quotient is = 0 
    Rememeber to store each reminder in a array (you have to write the reminder in reverse order)
4 - write the results
*/

// var to store decimal number 
int decimal; 
// counter for position of binary number 
int i = 0;
// var to store number of bit 
int nBit = 16;
// assume binary number could be max 16 bits
int binary[nBit]; 

// ask input for a deceimal value 
printf("Enter a decimal number : \n");
scanf("%d",&decimal);

// If decimal is 0 we do not perform any loop/calculation 
if (decimal == 0){ 
    printf("Binary value: 0 \n");
}
// if decimal is different than 0 we can perform loop and conversion 
else 
{
    while(decimal>0){ // loop until the decimal value is = 0
        binary[i] = decimal%2; // mod 2 of decimal value placed in position i 
        /*mod operator gives as result the remainder after division
        we are working with base 2 so the value will be 0-1 */ 
        decimal = decimal / 2;  // divide the number by base 2 
        i++; // increase counter to move position in the array 
    }
}

//  reverse the order of the bit in array and display 
printf("Binary value : "); // notify user 
for (int j = i-1; j>= 0; j--)
{
    printf("%d",binary[j]);
}

printf("\n");
    return 0;
}