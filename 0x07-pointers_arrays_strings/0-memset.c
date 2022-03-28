#include "main.h"
/**
<<<<<<< HEAD
 * _memset - check the code for Holberton School students.
=======
 * _memset - check the code for Alx School students.
>>>>>>> 2def80c4d9d32a2494c4de6b4ef7dfaf27ef0743
 * @s: parameter for the array
 * @b: parameter for the values in the array
 * @n: parameter for the number of times to print the new values
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
