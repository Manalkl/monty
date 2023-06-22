#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void parsefile(FILE *file);

/**
 * open_monty_script - Opens a Monty script file for parsing
 * @argc: Count of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: EXIT_SUCCESS on yes or EXIT_FAILURE on no
 */

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	parsefile(file);
	return (EXIT_SUCCESS);
}
