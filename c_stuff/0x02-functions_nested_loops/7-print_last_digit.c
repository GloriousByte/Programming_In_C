#include "main.h"
/**
 * print_last_digit- Self explanatory function
 * @a: lastdigit
 * Description: Printing all lower case alphabets.
 * Return: Always 0 if success
 */
int print_last_digit(int a)
{	int b;
	b = (a % 10);

	if (b <  0)
		b *= -1;
	_putchar(b + '0');
	return (b);
}
