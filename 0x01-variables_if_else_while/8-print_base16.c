#include <stdio.h>

/**
 * main - Prints number of base 16
 *
 * Return: Always 0 for success
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n')
	return (0);
}	
