#include "main.h"

char _putchar(char c);

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
