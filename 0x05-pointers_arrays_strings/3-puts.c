#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: * before str, parameter
 *
 * Return: void function no return value
 */


void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
