/*
10. Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/
#include <stdio.h>
#define SIZE 10

int main(){

    int n, i,j=0,z=0; 
    int odd[SIZE],even[SIZE], temp[SIZE];
    
    printf("\n\nSeparate odd and even integers in separate arrays:\n");
    printf("------------------------------------------------------\n");
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // insert values in temp array 
    printf("Input %d elements in the array: \n", n);
    for ( i = 0; i < n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d", &temp[i]);
    }

    // separate odd or even values 
    for (i = 0; i < n; i++)
    {
        if (temp[i] % 2 == 0)
        {
            even[j] = temp[i];
            j++;
        }
        else
        {
            odd[z] = temp[i];
            z++;
        }
        
    }

    //print the even values 
    printf("\nThe Even values are: ");
    for ( i = 0; i < j; i++)
    {
        printf("%d ",even[i]);
    }
    
    //print the odd values 
    printf("\nThe Odd values are: ");
    for ( i = 0; i < z; i++)
    {
        printf("%d ",odd[i]);
    }

    
    

    return 0; 
}
