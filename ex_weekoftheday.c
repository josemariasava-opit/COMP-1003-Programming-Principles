/**
 * C program to print day of week using switch case
 */
#include <stdio.h>

int main(){

    int  week_number = 0;

        // Ask the user for an input 
        printf("Insert the day of the week 1 - 7 : ");
        scanf("%d", & week_number);


    switch (week_number)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;

    case 3:
        printf("Wednesday \n");
        break;

    case 4:
        printf("Thursday \n");
        break;

    case 5:
        printf("Friday \n");
        break;

    case 6:
        printf("Saturday \n");
        break;

    case 7:
        printf("Sunday \n");
        break;

    default:
        printf("Invalid input. Enter a correct number \n");
        break;
    }
    return 0;
}