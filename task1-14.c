#include <stdio.h>

int main() {
    double a, b, c, result;

    printf("Enter value for the first variabl: ");
    scanf("%lf", &a);

    printf("Enter value for the second variable: ");
    scanf("%lf", &b);

    printf("Enter value for the third variable: ");
    scanf("%lf", &c);

    if (a > c && b > a) {
        result = a * b;
        printf("Condition 1 met (a > c AND b > a). Multiplication result: %.2lf\n", result);
    }
    else if (b < c || b < a) {
        if (c == 0) {
            printf("Condition 2 met (b < c OR b < a), but division by zero is not allowed.\n");
        } else {
            result = b / c;
            printf("Condition 2 met (b < c OR b < a). Division result: %.2lf\n", result);
        }
    }
    else if ((c > a && b != 5) || (b > c && a != 0)) {
        result = a + b + c;
        printf("Condition 3 met. Addition result: %.2lf\n", result);
    } 
    else {
        printf("None of the specified conditions were met.\n");
    }

    return 0;
}