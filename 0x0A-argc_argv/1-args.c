#include <stdio.h>
/**
 * main - function name passed into it
 * @argc: number of command line argument
 * @argv: array that holds the command line argument.
 * Return: (0)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
