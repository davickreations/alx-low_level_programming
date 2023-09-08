#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function prints the lowercase alphabet followed by a newline.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char letter = 'a';  // Initialize letter to 'a', the start of the alphabet

    while (letter <= 'z')  // Loop through the lowercase alphabet
    {
        putchar(letter);  // Print the current letter
        letter++;  // Move to the next letter
    }

    putchar('\n');  // Print a newline character to move to the next line

    return (0);  // Return 0 to indicate successful execution
}

