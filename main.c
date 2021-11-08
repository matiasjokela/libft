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
	// Testing ft_putchar
	printf("-------\nTesting ft_putchar:\n");
	ft_putstr("\x1B[32m");
	ft_putchar('O');
	ft_putchar('K');	
	printf("\x1B[0m\n\n");

	// Testing ft_putstr
	ft_putstr("Testing ft_putstr: \n\x1B[32mOK\x1B[0m\n\n");
	

	// Testing ft_strlen
	char *strs[20] = {"9223372036854775809", " -42", "abc 45 asd", "+-54 wkm", 
	" - 6", "00#00", "€545", "#4-4", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};
	int size = 12;
	printf("Testing ft_strlen:\n");
	for (int i = 0; i < size; i++)
	{
		if (strlen(strs[i]) != ft_strlen(strs[i]))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Input: %s, real: %lu, ft_strlen: %lu\n", strs[i], strlen(strs[i]), ft_strlen(strs[i]));			
			break;
		}
		if (i == size - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing strdup
	char *s2 = "jeejee";
	printf("Testing ft_strdup:\n");
	if (strcmp(strdup(s2), ft_strdup(s2)) == 0)
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	else
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");		
		printf("Input: %s, real: %s, ft_atoi: %s\n", s2, strdup(s2), ft_strdup(s2));
	}
	
	ft_putchar('\n');

	// Testing ft_isdigit
	printf("Testing ft_isdigit:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isdigit(i) != ft_isdigit(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isdigit: %d\n", i, isdigit(i), ft_isdigit(i));
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_isalpha
	printf("Testing ft_isalpha:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isalpha(i) != ft_isalpha(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isalpha: %d\n", i, isalpha(i), ft_isalpha(i));			
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_isalnum
	printf("Testing ft_isalnum:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isalnum(i) != ft_isalnum(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isalnum: %d\n", i, isalnum(i), ft_isalnum(i));			
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_isascii
	printf("Testing ft_isascii:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isascii(i) != ft_isascii(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isascii: %d\n", i, isascii(i), ft_isascii(i));				
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_isprint for all ascii characters
	printf("Testing ft_isprint:\n");
	for (int i = 0; i < 128; i++)
	{
		if (isprint(i) != ft_isprint(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isprint: %d\n", i, isprint(i), ft_isprint(i));			
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_toupper for all ascii characters	
	printf("Testing ft_toupper:\n");
	for (int i = 0; i < 128; i++)
	{
		if (toupper(i) != ft_toupper(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isprint: %d\n", i, toupper(i), ft_toupper(i));			
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_tolower for all ascii characters	
	printf("Testing ft_tolower:\n");
	for (int i = 0; i < 128; i++)
	{
		if (tolower(i) != ft_tolower(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isprint: %d\n", i, tolower(i), ft_tolower(i));			
			break;
		}
		if (i == 127)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_atoi
	char *strs1[20] = {"9223372036854775809", " -42", "abc 45 asd", "+-54 wkm", 
	" - 6", "00#00", "€545", "#4-4", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};
	int size1 = 12;
	printf("Testing ft_atoi:\n");
	for (int i = 0; i < size1; i++)
	{
		if (atoi(strs1[i]) != ft_atoi(strs1[i]))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Input: %s, real: %d, ft_atoi: %d\n", strs1[i], atoi(strs1[i]), ft_atoi(strs1[i]));			
			break;
		}
		if (i == size1 - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_strcmp
	char const *cmp1 = "ökljäa&&wieuqo88798";
	char *strs2[20] = {"9223372036854775809", " klja&&wieuqo88798", "abc 45 asd", "+-54 wkm", 
	" - 6", "äklja&&wieuqo88798", "€545", "klja&&wieuqo88798sd", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};
	int size2 = 12;	
	printf("Testing ft_strcmp:\n");
	for (int i = 0; i < size2; i++)
	{
		if (strcmp(cmp1, strs2[i]) != ft_strcmp(cmp1, strs2[i]))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Input: %s vs. %s, real: %d, ft_strcmp: %d\n", cmp1, strs2[i], strcmp(cmp1, strs2[i]), ft_strcmp(cmp1, strs2[i]));			
			break;
		}
		if (i == size2 - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	size_t n = 6;
	printf("Testing ft_strncmp:\n");
	for (int i = 0; i < size2; i++)
	{
		if (strncmp(cmp1, strs2[i], n) != ft_strncmp(cmp1, strs2[i], n))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Input: %s vs. %s, real: %d, ft_strcmp: %d\n", cmp1, strs2[i], strncmp(cmp1, strs2[i], n), ft_strncmp(cmp1, strs2[i], n));			
			break;
		}
		if (i == size2 - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');	


	// Testing ft_strcpy
	printf("Testing ft_strcpy:\n");
	size_t len1 = 10;
	char const *src1 = "ökljäa&&wieuqo88798";
	char strs3[200][200] = {"9223372036854775809", " klja&&wieuqo88798", "abc 45 asd", "+-54 wkm", 
	" - 6", "äklja&&wieuqo88798", "€545", "klja&&wieuqo88798sd", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};
	char strs4[200][200] = {"9223372036854775809", " klja&&wieuqo88798", "abc 45 asd", "+-54 wkm", 
	" - 6", "äklja&&wieuqo88798", "€545", "klja&&wieuqo88798sd", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};
	int size3 = 12;

	for (int i = 0; i < size3; i++)
	{
		if (ft_strcmp(strcpy(strs3[i], src1),ft_strcpy(strs4[i], src1)) != 0)
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("index: %d, real: %s, ft_strcpy: %s\n", i, strcpy(strs3[i], src1), ft_strcpy(strs4[i], src1));			
			break;
		}
		if (i == size2 - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');	


	// Testing ft_strncpy
	printf("Testing ft_strncpy:\n");
	char strs5[200][200] = {"9223372036854775809", " klja&&wieuqo88798", "abc 45 asd", "+-54 wkm", 
	" - 6", "äklja&&wieuqo88798", "€545", "klja&&wieuqo88798sd", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};
	char strs6[200][200] = {"9223372036854775809", " klja&&wieuqo88798", "abc 45 asd", "+-54 wkm", 
	" - 6", "äklja&&wieuqo88798", "€545", "klja&&wieuqo88798sd", "-2950000000", "", 
	"ksldfj95050544546064530334035310510060680550468656", "+ -  2"};

	for (int i = 0; i < size3; i++)
	{
		if (ft_strcmp(strncpy(strs5[i], src1, len1),ft_strncpy(strs6[i], src1, len1)) != 0)
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("index: %d, real: %s, ft_strcpy: %s\n", i, strncpy(strs5[i], src1, len1), ft_strncpy(strs6[i], src1, len1));			
			break;
		}
		if (i == size2 - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}
	ft_putchar('\n');

	// Testing ft_memset
	printf("Testing ft_memset:\n");
	char target[200] = "jeejee";
	char target1[200] = "jeejee";

	if (ft_strcmp(memset(target, -905, 5), ft_memset(target1, -905, 5)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memset: %s, ft_memset: %s\n", memset(target, -905, 5), ft_memset(target1, -905, 5));
	}
	else if (ft_strcmp(memset(target, 55, 25), ft_memset(target1, 55, 25)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memset: %s, ft_memset: %s\n", memset(target, 55, 25), ft_memset(target1, 55, 25));
	}
	else
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");



	printf("\nTesting ft_bzero:\n");
	/*char target2[200] = "jeejee";
	char target3[200] = "jeejee";

	if (ft_strcmp(bzero(target2, 5), ft_memset(target1, -905, 5)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memset: %s, ft_memset: %s\n", memset(target, -905, 5), ft_memset(target1, -905, 5));
	}
	else if (ft_strcmp(memset(target, 55, 25), ft_memset(target1, 55, 25)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memset: %s, ft_memset: %s\n", memset(target, 55, 25), ft_memset(target1, 55, 25));
	}
	else
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");		*/	

	int size4 = 200;
	bzero(target, 5);
	ft_bzero(target1, 5);
	for (int i = 0; i < size4; i++)
	{
		if (target[i] != target1[i])
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("index: %d, bzero: %d, ft_bzero %d\n", i, target[i], target1[i]);
			break;
		}
		if (i == size4 - 1)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");			
		}
	}

}
