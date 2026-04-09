#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    int sum = a + b;
    int substraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulus = a % b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
    printf("The substraction of %d and %d is: %d\n", a, b, substraction);
    printf("The multiplication of %d and %d is: %d\n", a, b, multiplication);
    printf("The division of %d and %d is: %d\n", a, b, division);
    printf("The modulus of %d and %d is: %d\n", a, b, modulus);
    return 0;
}