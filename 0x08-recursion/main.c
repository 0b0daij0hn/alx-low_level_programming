#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, Recursion!";
    int n, result;

    /* Task 0: _puts_recursion*/
    printf("Task 0: _puts_recursion\n");
    _puts_recursion(str);
    printf("\n\n");

    /* Task 1: _print_rev_recursion*/
    printf("Task 1: _print_rev_recursion\n");
    _print_rev_recursion(str);
    printf("\n\n");

    /* Task 2: _strlen_recursion*/
    printf("Task 2: _strlen_recursion\n");
    n = _strlen_recursion(str);
    printf("Length of the string: %d\n\n", n);

    /* Task 3: factorial*/
    printf("Task 3: factorial\n");
    result = factorial(5);
    printf("Factorial of 5: %d\n\n", result);

    /* Task 4: _pow_recursion*/
    printf("Task 4: _pow_recursion\n");
    result = _pow_recursion(2, 3);
    printf("2^3: %d\n\n", result);

    /* Task 5: _sqrt_recursion*/
    printf("Task 5: _sqrt_recursion\n");
    result = _sqrt_recursion(25);
    printf("Square root of 25: %d\n\n", result);

    /* Task 6: is_prime_number*/
    printf("Task 6: is_prime_number\n");
    result = is_prime_number(7);
    printf("Is 7 a prime number? %s\n\n", result ? "Yes" : "No");

    /* Task 7: is_palindrome*/
    printf("Task 7: is_palindrome\n");
    result = is_palindrome("level");
    printf("Is 'level' a palindrome? %s\n\n", result ? "Yes" : "No");

    /* Task 8: wildcmp*/
    printf("Task 8: wildcmp\n");
    result = wildcmp("main.c", "*.c");
    printf("Does 'main.c' match '*.c'? %s\n\n", result ? "Yes" : "No");

    return (0);
}

