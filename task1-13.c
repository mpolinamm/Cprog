#include <stdio.h>

int main() {
    double num1, num2, result;

    printf("Enter number1: ");
    scanf("%lf", &num1);

    printf("Enter number2: ");
    scanf("%lf", &num2);

    if (num1 != num2) {
        result = num1 + num2;
        printf("Numbers are not equal. Addition result: %.2lf\n", result);
    } else {
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = num1 / num2;
            printf("Numbers are equal. Division result: %.2lf\n", result);
        }
    }

    return 0;
}