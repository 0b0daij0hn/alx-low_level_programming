#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <math.h>

/* Task 0: _puts_recursion */
void _puts_recursion(char *s);

/* Task 1: _print_rev_recursion */
void _print_rev_recursion(char *s);

/* Task 2: _strlen_recursion */
int _strlen_recursion(char *s);

/* Task 3: factorial */
int factorial(int n);

/* Task 4: _pow_recursion */
int _pow_recursion(int x, int y);

/* Task 5: _sqrt_recursion */
int _sqrt_recursion(int n);

/* Task 6: is_prime_number */
int is_prime_number(int n);

/* Task 7: is_palindrome */
int is_palindrome(char *s);

/* Task 8: wildcmp */
int wildcmp(char *s1, char *s2);

/* Helper function for Task 5: _sqrt_recursion */
int sqrt_helper(int n, int i);

/* Helper function for Task 6: is_prime_number */
int is_prime_helper(int n, int i);

/* Helper function for Task 7: is_palindrome */
int palindrome_helper(char *s, int length);

#endif /* MAIN_H */

