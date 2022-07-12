#include <stdio.h>

/**
 *Main - Entery point
 *
 *Return: 0 succes
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)

	{
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	}

	putchar(10);

	return (0);
}
