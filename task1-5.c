#include <stdio.h>

double percentage;
unsigned int myAge;
unsigned long distance;
int temperature;
float fertilizerPrice;

int main()
{
    percentage = 0.5;
    myAge = 15;
    distance = 150000;
    temperature = 36.6;
    fertilizerPrice = 12.35;
    printf("My name is Zdzichu, I am %u", myAge);
    printf(" years old, I go to a school located ");
    printf("%lu cm away from my home", distance);
    printf("\nThe girls from my school have ");
    printf("a body temperature of %d degrees Celsius, ",
    temperature);
    printf("that is why I spend on them only ");
    printf("%f percent of my income ", percentage);
    printf("from my side job, which is wholesale ");
    printf("fertilizer trade at a price of %f PLN per kg\n",
    fertilizerPrice);
    return 0;
}
