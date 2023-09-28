#include "main.h"
/**
 * _strlen_recursion - to get the string length
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare each character of the string
 * @s: string
 * @left: smallest iterator
 * @right: largest iterator
 * Return: int
 */

int compare_string()
{

}
