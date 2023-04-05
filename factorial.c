#include <stdio.h>

int factorial(int number)
{
    if (number <= 1) /* if num is either 1 or 0, factorial is always 1*/
        return (1);

    return (number * factorial(number - 1));
}

int main(void)
{
    printf("Factorial of 5 is %d\n", factorial(5));
    printf("Factorial of 6 is %d\n", factorial(6));
    printf("Factorial of 7 is %d\n", factorial(7));
    printf("Factorial of 10 is %d\n", factorial(10));
    printf("Factorial of 1 is %d\n", factorial(1));
    printf("Factorial of 0 is %d\n", factorial(0));

    return (0);
}