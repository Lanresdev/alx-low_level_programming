#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 *
	 * Return: none
	 */


	void print_alphabet(void)
	{
		 /* function body */
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

