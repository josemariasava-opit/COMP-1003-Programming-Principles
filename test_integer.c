#include <stdio.h>

int main() {
    int number;
    char extra;

    printf("Enter an integer: ");

    // Read input and check if it's a valid integer
    if (scanf("%d%c", &number, &extra) == 2 && extra == '\n') {
        printf("You entered a valid integer: %d\n", number);
    } else {
        printf("Invalid input. Please enter an integer.\n");

        // Clear the input buffer
        while (getchar() != '\n');
    }

    return 0;
}
