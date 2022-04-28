#include "main.h"
/**
 * _print_rev_recursion - Print the reverse of a string
 * @s: Pointer to the string
 * Return: void
 * 
 */

void _print_rev_recursion(char *s)
{
    if (s[0] == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(s[0]);
    _putchar(s - 1);
    
}