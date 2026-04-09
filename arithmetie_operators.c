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
    /**
     * This is a mod operator example in c. the mod operator is used to find the remainder of a division operation. in this expample, we are finding the modulus of 10 and 5, which is 0 because 10 is divisible by 5. if we were to find the modulus of 11 and 5, it would be 1 because 11 divided by 5 leaves a remainder of 1.
     * */ 
    return 0;
}