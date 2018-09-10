#include <stdio.h>

int math(int num1, int num2, char operation)
{
    switch(operation)
        {
            case '+' :
                printf("%d", (int)(num1 + num2));
                break;
            case '-' :
                printf("%d", (int)(num1 - num2));
                break;
            case '*' :
                printf("%d", (int)(num1 * num2));
                break;
            case '/' :
                printf("%d", (int)(num1 / num2));
                break;
            case '%' :
                printf("%d", (int)(num1 % num2));
                break;
            case '<' :
                printf("%d", (int)(num1 << num2));
                break;
            case '>' :
                printf("%d", (int)(num1 >> num2));
                break;
            case '&' :
                printf("%d", (int)(num1 & num2));
                break;
            case '|' :
                printf("%d", (int)(num1 | num2));
                break;
            case '^' :
                printf("%d", (int)(num1 ^ num2));
                break;
            case '~' :
                printf("%d", (int)(~num1));
                break;
        }
}

int main()
{
    char _operation;
    int _num1;
    int _num2;
    
    printf("Enter the operator:\n");
    scanf("%s", &_operation);
    printf("Enter the first number:\n");
    scanf("%d", &_num1);
    printf("Enter the second number:\n");
    scanf("%d", &_num2);
    
    math(_num1, _num2, _operation);
    
    return 0;
}