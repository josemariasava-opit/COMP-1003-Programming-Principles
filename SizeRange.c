#include <stdio.h>

int main(){

    /*Using the operator sizeof can be used to determine  how much memory each data type occupies 
    */
   printf("Size of char: %lu bytes \n", sizeof(char)); 
   printf("Size of int: %lu bytes \n", sizeof(int));
   printf("Size of float: %lu bytes \n", sizeof(float));


    // sizeof with variables 
    int valueInt = 50;
    double valueDouble = 32.1;
    
    printf("\nSize of valueInt %lu bytes \n", sizeof(valueInt));
    printf("Size of valueDouble %lu bytes \n", sizeof(valueDouble));

    

    return 0;
}