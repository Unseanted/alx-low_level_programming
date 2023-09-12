#include "main.h"
/**
*print_alphabet x10 - prints alphabets in lowercase 10x
*Return:0
*/

int print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; 1 <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	}
	_putchar('\n');
}
