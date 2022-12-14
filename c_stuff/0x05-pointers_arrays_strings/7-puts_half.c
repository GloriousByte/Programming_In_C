#include "main.h"
/**
 * puts_half- Self explanatory function
 * @str: pointer
 * Description: Printing all numbers from 0-9.
 * Return: Always 0 if success
 */
void puts_half(char *str)
{
	int num;
	int j = 0;

	for (num = 0; str[num] != '\0'; num++)
		j++;

	num = (j + 1) / 2;

	for (j = num; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
