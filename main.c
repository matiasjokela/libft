/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:53:00 by mjokela           #+#    #+#             */
/*   Updated: 2021/11/03 13:53:49 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>


int main (void)
{
	// Testing ft_putchar and ft_putstr
	printf("-------\nTesting ft_putchar and ft_putstr:\n");
	ft_putstr("This is ft_putstr, and this is ft_putchar (should be c) -> ");
	ft_putchar('c');
	printf("\n\n");

	// Testing ft_strlen
	char *s1 = "testi";
	printf("Testing ft_strlen with \"%s\":\n", s1);
	printf("Real: %lu, ft_strlen: %lu\n", strlen(s1), ft_strlen(s1));
	ft_putchar('\n');

	// Testing strdup
	char *s2 = "jeejee";
	printf("Testing ft_strdup with \"%s\":\n", s2);
	printf("Real: %s, ft_strdup: %s\n", strdup(s2), ft_strdup(s2));
	ft_putchar('\n');

	// Testing ft_isdigit
	printf("Testing ft_isdigit:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isdigit(i) != ft_isdigit(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isdigit: %d\n", i, isdigit(i), ft_isdigit(i));
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}
	ft_putchar('\n');

	// Testing ft_isalpha
	printf("Testing ft_isalpha:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isalpha(i) != ft_isalpha(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isalpha: %d\n", i, isalpha(i), ft_isalpha(i));			
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}
	ft_putchar('\n');

	// Testing ft_isalnum
	printf("Testing ft_isalnum:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isalnum(i) != ft_isalnum(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isalnum: %d\n", i, isalnum(i), ft_isalnum(i));			
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}
	ft_putchar('\n');

	// Testing ft_isascii
	printf("Testing ft_isascii:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isascii(i) != ft_isascii(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isascii: %d\n", i, isascii(i), ft_isascii(i));				
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}
	ft_putchar('\n');

	// Testing ft_isprint for all ascii characters
	printf("Testing ft_isprint:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isprint(i) != ft_isprint(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isprint: %d\n", i, isprint(i), ft_isprint(i));			
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}
	ft_putchar('\n');

	// Testing ft_toupper for all ascii characters	
	printf("Testing ft_toupper:\n");
	for (int i = 0; i < 128; i++)
	{
		if (toupper(i) != ft_toupper(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isprint: %d\n", i, toupper(i), ft_toupper(i));			
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}
	ft_putchar('\n');

	// Testing ft_tolower for all ascii characters	
	printf("Testing ft_tolower:\n");
	for (int i = 0; i < 128; i++)
	{
		if (tolower(i) != ft_tolower(i))
		{
			printf("INCORRECT\n");
			printf("char: %c, real: %d, ft_isprint: %d\n", i, tolower(i), ft_tolower(i));			
			break;
		}
		if (i == 127)
		{
			printf("CORRECT\n");
		}
	}	
}
