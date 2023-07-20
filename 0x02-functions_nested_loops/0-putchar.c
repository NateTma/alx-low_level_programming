#include "main.h"

int _putchar(char c);
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(char)
{
	char c[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
	_putchar(c[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
