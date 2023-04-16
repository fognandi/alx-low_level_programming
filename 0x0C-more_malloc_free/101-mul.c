#include "main.h"

#define ERR_MSG "Error"

/**
  * is_digit - checks if string contains a non-digit char
  * @s: string to be evaluated
  * Return: 0 if a non-digit is found, 1 otherwise
  */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
  * _strlen - returns the legnth of a string
  * @s: string to evaluate
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * errors - handles errors for main
  */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
  * main - multiplies two positive numbers
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: always 0 (Success)
  */
int main(int argc, char *argv[])
{

unsigned long nul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{ printf("Error\n");
			exit(98); }
		}
	}
	nul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", nul);
return (0);
}
