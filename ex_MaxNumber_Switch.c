/**
 * C program to find maximum between two numbers using switch case
 */
#include <stdio.h>

int main(){

    int n1, n2; 

    // Input numbers from user
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    // Expression (num1 > num2) will return either 0 or 1 

    switch(n1>n2)
    {
        case 0:
            printf("%d is the maximum\n", n2);
            break;
        case 1:
            printf("%d is the maximum\n", n1);
            break;
        }

    return 0; 
}