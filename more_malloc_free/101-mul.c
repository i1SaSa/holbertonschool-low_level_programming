#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a string contains only digits
 * @s: input string
 * Return: 1 if true, 0 if false
 */
int _isdigit(char *s)
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
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, j, carry, n1, n2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;

	result = calloc(len, sizeof(int));
	if (result == NULL)
		exit(98);

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len && result[i] == 0)
		i++;

	if (i == len)
		printf("0");
	else
	{
		for (; i < len; i++)
			printf("%d", result[i]);
	}
	printf("\n");
	free(result);
	return (0);
}

