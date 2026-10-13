#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter number1: ");
    scanf("%lf", &num1);

    printf("Enter number2: ");
    scanf("%lf", &num2);

    if (num1 > num2) {
        printf("Number1 %.2lf is larger than number2 %.2lf.\n", num1, num2);
    } else if (num2 > num1) {
        printf("Number2 %.2lf is larger than number1 %.2lf.\n", num2, num1);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}