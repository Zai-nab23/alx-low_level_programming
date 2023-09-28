#include "main.h"

int empty_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
* is_palindrome - function that returns 1
* if a string is a palindrome and 0 if not
* @s: string
*
* Return: 1 if it is, 0 it's not
*/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (empty_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - function that returns 1
* if a string is a palindrome and 0 if not
* @s: string length
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
* empty_pal - checks the characters recursively for palindrome
* @s: string
* @i: iterator
* @length: length of the string
*
* Return: 1 if palindrome, 0 0therwise
*/
int empty_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (empty_pal(s, i + 1, length - 1));
}
