#include <stdio.h>

/*
 * math.c
 *
 * Created on: Sept 10, 2018
 * Last Edited: Sept 10, 2018
 * Author: Ryan Baker
 */

// This function expects num1 and num2, the numbers being used for calculation, and operation, a character that stores the operator being used for calculation
int math(int num1, int num2, char operation)
{
	// Based on the character stored in operation, one case will be executed
    switch(operation)
        {
			// This case will be executed if the value of operation is '+'
            case '+' :
				// Compute num1 ADD num2 and print
                printf("%d", (int)(num1 + num2));
                break;
			// This case will be executed if the value of operation is '-'
            case '-' :
				// Compute num1 SUBTRACT num2 and print
                printf("%d", (int)(num1 - num2));
                break;
			// This case will be executed if the value of operation is '*'
            case '*' :
				// Compute num1 MULTIPLY num2 and print
                printf("%d", (int)(num1 * num2));
                break;
			// This case will be executed if the value of operation is '/'
            case '/' :
				// Compute num1 DIVIDE num2 and print
                printf("%d", (int)(num1 / num2));
                break;
			// This case will be executed if the value of operation is '%'
            case '%' :
				// Compute num1 MODULUS num2 and print
                printf("%d", (int)(num1 % num2));
                break;
			// This case will be executed if the value of operation is '<'
            case '<' :
				// Compute num1 SHIFT LEFT num2 and print
                printf("%d", (int)(num1 << num2));
                break;
			// This case will be executed if the value of operation is '>'
            case '>' :
				// Compute num1 SHIFT RIGHT num2 and print
                printf("%d", (int)(num1 >> num2));
                break;
			// This case will be executed if the value of operation is '&'
            case '&' :
				// Compute num1 BITWISE AND num2 and print
                printf("%d", (int)(num1 & num2));
                break;
			// This case will be executed if the value of operation is '|'
            case '|' :
				// Compute num1 BITWISE OR num2 and print
                printf("%d", (int)(num1 | num2));
                break;
			// This case will be executed if the value of operation is '^'
            case '^' :
				// Compute num1 BITWISE XOR num2 and print
                printf("%d", (int)(num1 ^ num2));
                break;
			// This case will be executed if the value of operation is '~'
            case '~' :
				// Compute BITWISE NOT num1 and print
                printf("%d", (int)(~num1));
                break;
        }
}

// Example function that calls the math function
int main()
{
	// Stores the operator
    char _operation;
	// Stores the first number
    int _num1;
	// Stores the second number
    int _num2;
    
	// Get the operator from STDIN
    printf("Enter the operator:\n");
    scanf("%s", &_operation);
	// Get the first number from STDIN
    printf("Enter the first number:\n");
    scanf("%d", &_num1);
	// Get the second number from STDIN
    printf("Enter the second number:\n");
    scanf("%d", &_num2);
    
	// Call the math function using the values collected from STDIN
    math(_num1, _num2, _operation);
    
    return 0;
}