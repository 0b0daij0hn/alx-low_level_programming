#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        printf("%s\n", argv[0]);
        return (0);
    }
    else
    {
        return (1); /* Indicates an error */
    }
}

