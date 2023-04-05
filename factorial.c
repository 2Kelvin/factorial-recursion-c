#include <stdio.h>

int factorial(int number)
{
    if (number == 0)
        return (1);

    return (number * factorial(number - 1));
}

int main(void)
{
    printf("Factorial of 5 is %d\n", factorial(5));
    printf("Factorial of 6 is %d\n", factorial(6));
    printf("Factorial of 7 is %d\n", factorial(7));
    printf("Factorial of 10 is %d\n", factorial(10));

    return (0);
}