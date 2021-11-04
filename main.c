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


int main (void)
{
	// Testing ft_putchar and ft_putstr
	printf("Testing ft_putchar and ft_putstr");
	ft_putstr("This is ft_putstr, and this is ft_putchar (should be c) -> ");
	ft_putchar('c');
	ft_putchar('\n');

	ft_putchar('\n');
	// Testing ft_strlen
	char *s1 = "testi";
	printf("Testing ft_strlen with \"%s\":\n", s1);
	printf("Real: %lu, ft_strlen: %lu\n", strlen(s1), ft_strlen(s1));

	ft_putchar('\n');
	// Testing strdup
	char *s2 = "jeejee";
	printf("Testing ft_strdup with \"%s\":\n", s2);
	printf("Real: %s, ft_strdup: %s\n", strdup(s2), ft_strdup(s2));

	// Testing ft_isdigit

	int c = 'f';

	printf("Testing ft_isdigit and ft_isalpha with \"%c\":\n", c);
	printf("Real: %d, ft_isdigit: %d\n", isdigit(c), ft_isdigit(c));
	printf("Real: %d, ft_isalpha: %d\n", isalpha(c), ft_isalpha(c));	

}
