/*https://www.youtube.com/watch?v=DplxIq0mc_Y*/

/*
pointer = a "variable-like" reference that holds a memory address to another variable 
attay, etc. 

* = indirection operator (value at address)
*/
#include <stdio.h>

void printAge(int *pAge){

    printf("You are %d years old \n", *pAge); // dereference the pointer 
}

int main(){

    int age = 21; // age has a memory address and a value 

    int *pAge = NULL; // initialize always the pointer to null (good practice)

    pAge = &age; // assign the memory address to pointer

    printf("address of variable age: %p\n", &age);
    printf("value of pAge %p \n", pAge);

    printf("Size of age: %d bytes\n", sizeof(age));
    printf("Size of pAge: %d bytes \n", sizeof(pAge));

    printf("value of variable age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);

    printAge(pAge);

    return 0; 
}