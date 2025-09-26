#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operator;

    // Input from user
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Notice the space before %c to consume any leftover newline

    // Perform calculation
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;

    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;

    case '/':
        if (num2 != 0)
            printf("Result: %.2lf\n", num1 / num2);
        else
            printf("Error! Division by zero.\n");
        break;

    case '%':
        if ((int)num2 != 0)
            printf("Result: %d\n", (int)num1 % (int)num2);
        else
            printf("Error! Modulo by zero.\n");
        break;

    default:
        printf("Invalid operator!\n");
    }

    return 0;
}