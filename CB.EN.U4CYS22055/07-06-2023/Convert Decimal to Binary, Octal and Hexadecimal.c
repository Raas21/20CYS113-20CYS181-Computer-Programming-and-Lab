/* This program converts a decimal number to binary, octal, and hexadecimal. */

#include <stdio.h>

/* The `main()` function first prompts the user to enter a decimal number. */
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    /* If the decimal number is less than or equal to 0, an error message is printed. */
    if (decimal <= 0) {
        printf("Error: Value should be greater than 0");
    }
    else {
        /* The `decToBinary()` function is called to convert the decimal number to binary. */
        printf("Binary equivalent: ");
        decToBinary(decimal);

        /* The `decToOctal()` function is called to convert the decimal number to octal. */
        printf("\nOctal equivalent: ");
        decToOctal(decimal);

        /* The `decToHexadecimal()` function is called to convert the decimal number to hexadecimal. */
        printf("\nHexadecimal equivalent: ");
        decToHexadecimal(decimal);

        /* A newline character is printed to separate the output. */
        printf("\n");
    }

    /* The return value of the `main()` function is 0. */
    return 0;
}

/* The `decToBinary()` function recursively converts a decimal number to binary. */
int decToBinary(int decimal) {
    if (decimal > 0) {
        /* The `decToBinary()` function is called recursively to convert the decimal number to binary. */
        decToBinary(decimal / 2);

        /* The remainder of the decimal number is printed. */
        printf("%d", decimal % 2);
    }
}

/* The `decToHexadecimal()` function recursively converts a decimal number to hexadecimal. */
void decToHexadecimal(int decimal) {
    if (decimal > 0) {
        /* The `decToHexadecimal()` function is called recursively to convert the decimal number to hexadecimal. */
        decToHexadecimal(decimal / 16);

        /* The remainder of the decimal number is converted to hexadecimal and printed. */
        int remainder = decimal % 16;
        if (remainder < 10) {
            printf("%d", remainder);
        } 
        else {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

/* The `decToOctal()` function recursively converts a decimal number to octal. */
void decToOctal(int decimal) {
    if (decimal > 0) {
        /* The `decToOctal()` function is called recursively to convert the decimal number to octal. */
        decToOctal(decimal / 8);

        /* The remainder of the decimal number is printed. */
        printf("%d", decimal % 8);
    }
}
