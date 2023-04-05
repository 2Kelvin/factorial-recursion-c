The `factorial` of a number is the **multiplication of the number itself and all the positive numbers that sequent to the number**. For example the sequent numbers of 5 is 1,2,3 & 4.

Factorial is denoted using `!` after the number. So the factorial of 5 is:
**5! = 5 * 4 * 3 * 2 * 1**

So, the formula to finding the factorial of a number is:
```c
factorial(num) = num * (num -1) * (num 1 - 1) * (num -1 - 1 -1); /* upto 1 */
```

This formula can be simplified using recursion like so:
```c
factorial(num) = num * factorial(n - 1);
```

The factorial of 0 is always 1