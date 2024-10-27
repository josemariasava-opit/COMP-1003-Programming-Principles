// include namesapce 
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    // var decimal 
    int decimal= 0;

    // Assuming the binary string will be max 7 bit max
    const char binary[7]; 

    // Ask user for binary number and store in var binary 
    printf("Enter a binary number: ");
    scanf("%s", binary);

    //count char of binary number
    int length = strlen(binary); 

    /*iterate over each bit
    for loop 
    */
    for (int i = 0; i < length; i++)
    {
        if (binary[length - i -1] == '1')
        {
            decimal += pow(2,i);
        }
    }
    // print decimal value calculated with for loop 
    printf("Decimal value is : %d\n", decimal);
    
    return 0;

} 