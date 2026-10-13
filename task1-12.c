#include <stdio.h>

int main() {
    double num1, num2, result;

    printf("Enter number1: ");
    scanf("%lf", &num1);

    printf("Enter number2: ");
    scanf("%lf", &num2);

    result = num1 * num2;
    printf("The product is: %.2lf\n", result);

    if (result > 100) {
        printf("The result is greater than 100.\n");
    } else if (result < 100) {
        printf("The result is less than 100.\n");
    } else {
        printf("The result is equal to 100.\n");
    }

    return 0;
}