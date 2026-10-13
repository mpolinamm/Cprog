#include <stdio.h>

int main() {
    int age;
    int future_age;

    printf("Enter your age: ");
    scanf("%d", &age);

    future_age = age + (480 / 12);

    printf("In 480 months, you will be %d years old.\n", future_age);

    return 0;
}