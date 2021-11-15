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

void uppercase(char *str);
void uppercase_even(unsigned int i, char *str);
char toupper_char(char c);
char toupper_char_even(unsigned int i, char c);

int main (void)
{

	printf("\n------\nPART 1\n------\n\n");	

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
	for (int i = 0; i < 150; i++)
	{
		if (isascii(i) != ft_isascii(i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("char: %c, real: %d, ft_isascii: %d\n", i, isascii(i), ft_isascii(i));				
			break;
		}
		if (i == 149)
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
		if (i == 0 && (strncmp("jeejeejee", "jeejee", 6) != ft_strncmp("jeejeejee", "jeejee", 6)))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Input: (\"jeejeejee\", \"jeejee\", 6), real %d, ft_strncmp %d\n", strncmp("jeejeejee", "jeejee", 6), ft_strncmp("jeejeejee", "jeejee", 6));
			break ;			
		}
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

	if (ft_strcmp((char *)memset(target, -905, 5), (char *)ft_memset(target1, -905, 5)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memset: %s, ft_memset: %s\n", (char *)memset(target, -905, 5), (char *)ft_memset(target1, -905, 5));
	}
	else if (ft_strcmp((char *)memset(target, 55, 25), ft_memset(target1, 55, 25)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memset: %s, ft_memset: %s\n", (char *)memset(target, 55, 25), (char *)ft_memset(target1, 55, 25));
	}
	else
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");



	printf("\nTesting ft_bzero:\n");

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

	printf("\nTesting ft_memcpy:\n");
	char jee[50] = "jeejee";
	char jee1[50] = "jeejee";
	char const jee2[50] = "hello, world";
	char jee3[50] = "jeejeejerrycotton";
	char jee4[50] = "jeejeejerrycotton";

	if (ft_strcmp((char *)memcpy(jee, jee2, 4), (char *)ft_memcpy(jee1, jee2, 4)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memcpy: %s, ft_memcpy %s\n", (char *)memcpy(jee, jee2, 4), (char *)ft_memcpy(jee1, jee2, 4));
	}
	else if (ft_strcmp((char *)memcpy(jee3, jee2, 20), (char *)ft_memcpy(jee4, jee2, 20)) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("memcpy: %s, ft_memcpy %s\n", (char *)memcpy(jee3, jee2, 20), (char *)ft_memcpy(jee4, jee2, 20));
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	//Testing ft_memcpy
	printf("\nTesting ft_memcpy:\n");
	char const source[50] = "Lorem Ipsum; jeejee";
	char destination1[50] = "Hello world!, it will be a great day";
	char const source2[50] = "Hello world!, it will be a great day";
	int c = ';';

	char *mem = memccpy(destination1, source, c, 49);
	ft_strcpy(destination1, source2);
	char *ft_mem = ft_memccpy(destination1, source, c, 49);


	if (ft_mem != mem)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("real: %p, ft_memcpy: %p\n", mem, ft_mem);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}




	
	//Testing ft_memmove
	printf("\nTesting ft_memmove:\n");
	char const src4[50] = "Lorem Ipsum; jeejee";
	
	char dest4[50] = "Hello world!, it will be a great day";
	char const src5[50] = "Hello world!, it will be a great day";

	char *memm = memmove(dest4, src4, 49);
	ft_strcpy(dest4, src5);
	char *ft_memm = ft_memmove(dest4, src4, 49);


	if (ft_memm != memm)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("real: %p, ft_memcpy: %p\n", memm, ft_memm);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}
	
	
	//Testing ft_memchr
	printf("\nTesting ft_memchr:\n");
	char *str5 = "lkjdsalj9d8uajksdkdkash";

	if (memchr(str5, '9', 200) != ft_memchr(str5, '9', 200))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Real: %p, ft_memchr: %p\n", memchr(str5, '9', 200), ft_memchr(str5, '9', 200));	
	}
	else if (memchr(str5, ':', 200) != ft_memchr(str5, ':', 200))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Real: %p, ft_memchr: %p\n", memchr(str5, ':', 200), ft_memchr(str5, ':', 200));			
	}
	else if (memchr(str5, 'a', 21) != ft_memchr(str5, 'a', 21))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Real: %p, ft_memchr: %p\n", memchr(str5, 'a', 21), ft_memchr(str5, 'a', 21));					
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}


	//Testing ft_memchr
	printf("\nTesting ft_memcmp:\n");
	const char s4[] = "atoms\0\0\0\0";  
	const char s5[] = "atoms\0abc";     

	for (int i = 0; i < 9; i++)
	{
		if (memcmp(s4, s5, i) != ft_memcmp(s4, s5, i))
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("index: %d, Real: %d, ft_memchr: %d\n", i, memcmp(s4, s5, i), ft_memcmp(s4, s5, i));
			break ;
		}
		if (i == 8)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}

	//Testing ft_strcat
	printf("\nTesting ft_strcat:\n");
	char s6[50] = "Hello, ";
	char s7[50] = "Hello, ";
	char const s8[50] = "world!";
	char *s9 = strcat(s6, s8);
	char *s10 = ft_strcat(s7, s8);

	if (ft_strcmp(s9, s10) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Real %s, ft_strcat: %s\n", s9, s10);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	//Testing ft_strncat
	printf("\nTesting ft_strncat:\n");
	char s11[50] = "Hello, ";
	char s12[50] = "Hello, ";
	char const s13[50] = "world!";
	char *s14 = strncat(s11, s13, 2);
	char *s15 = ft_strncat(s12, s13, 2);


	if (ft_strcmp(s14, s15) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Real %s, ft_strcat: %s\n", s14, s15);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	//Testing ft_strlcat
	printf("\nTesting ft_strlcat:\n");
	char s16[10] = "Hello, ";
	char s17[10] = "Hello, ";
	char s18[50] = "Hello, ";
	char s19[50] = "Hello, ";
	size_t tlcat = strlcat(s16, s13, 10);
	size_t ft_tlcat = ft_strlcat(s17, s13, 10);
	size_t tlcat2 = strlcat(s18, s13, 50);
	size_t ft_tlcat2 = ft_strlcat(s19, s13, 50);

	if ((ft_strcmp(s16, s17) != 0) || tlcat != ft_tlcat)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Real %s, %zu\n", s16, tlcat);
		printf("ft_strlcat %s, %zu\n", s17, ft_tlcat);		
	}
	else if ((ft_strcmp(s18, s19) != 0) || tlcat2 != ft_tlcat2)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("real: %s\nft_strlcat: %s\n", s18, s19);
		printf("real: %zu\nft_strlcat: %zu\n", tlcat2, ft_tlcat2);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	//Testing ft_strchr
	printf("\nTesting ft_strchr:\n");
	char const s20[50] = "The answer to life, the universe, and everything";

	char *tst = strchr(s20, 'e');
	char *tst1 = ft_strchr(s20, 'e');
	char *tst2 = strchr(s20, '\0');
	char *tst3 = ft_strchr(s20, '\0');
	char *tst4 = strchr(s20, 'z');
	char *tst5 = ft_strchr(s20, 'z');

	if ((ft_strcmp(tst, tst1) != 0) || tst != tst1)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Input char: 'e', real: %p, ft_strchr: %p\n", tst, tst1);
	}
	else if ((ft_strcmp(tst2, tst3) != 0) || tst2 != tst3)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Input char: '\\0', real: %p, ft_strchr: %p\n", tst2, tst3);
	}
	else if (tst4 != tst5)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Input char: 'z', real: %p, ft_strchr: %p\n", tst4, tst5);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}	


	//Testing ft_strrchr
	printf("\nTesting ft_strrchr:\n");

	char *tst6 = strrchr(s20, 'e');
	char *tst7 = ft_strrchr(s20, 'e');
	char *tst8 = strrchr(s20, '\0');
	char *tst9 = ft_strrchr(s20, '\0');
	char *tst10 = strrchr(s20, 'z');
	char *tst11 = ft_strrchr(s20, 'z');

	if ((ft_strcmp(tst6, tst7) != 0) || tst6 != tst7)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Input char: 'e', real: %p, ft_strchr: %p\n", tst6, tst7);
	}
	else if ((ft_strcmp(tst8, tst9) != 0) || tst8 != tst9)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Input char: '\\0', real: %p, ft_strchr: %p\n", tst8, tst9);
	}
	else if (tst10 != tst11)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Input char: 'z', real: %p, ft_strchr: %p\n", tst10, tst11);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}	

	//Testing ft_strstr
	printf("\nTesting ft_strstr\n");

	char const *hay = "The answer to life, the universe, and everything";
	char const *needle = "";
	char const *needle1 = "answer";
	char const *needle2 = "42";

	if (strstr(hay, needle) != ft_strstr(hay, needle))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, real: %p, ft_strstr: %p", needle, strstr(hay, needle), ft_strstr(hay, needle));
	}
	else if (strstr(hay, needle1) != ft_strstr(hay, needle1))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, real: %p, ft_strstr: %p", needle1, strstr(hay, needle1), ft_strstr(hay, needle1));
	}
	else if (strstr(hay, needle2) != ft_strstr(hay, needle2))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, real: %p, ft_strstr: %p", needle2, strstr(hay, needle2), ft_strstr(hay, needle2));
	}		
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}	

	//Testing ft_strnstr
	printf("\nTesting ft_strnstr\n");

	if (strnstr(hay, needle, 15) != ft_strnstr(hay, needle, 15))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, len: 15, real: %p, ft_strstr: %p", needle, strnstr(hay, needle, 15), ft_strnstr(hay, needle, 15));
	}
	else if (strnstr(hay, needle1, 10) != ft_strnstr(hay, needle1, 10))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, len: 10, real: %p, ft_strstr: %p", needle, strnstr(hay, needle1, 10), ft_strnstr(hay, needle1, 10));
	}
	else if (strnstr(hay, needle1, 9) != ft_strnstr(hay, needle1, 9))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, len: 9, real: %p, ft_strstr: %p", needle, strnstr(hay, needle1, 9), ft_strnstr(hay, needle1, 9));
	}
	else if (strnstr(hay, needle2, 60) != ft_strnstr(hay, needle2, 60))
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Needle: %s, len: 60, real: %p, ft_strstr: %p", needle2, strnstr(hay, needle2, 60), ft_strnstr(hay, needle2, 60));
	}		
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// PART 2
	printf("\n------\nPART 2\n------\n");


	// Testing ft_putchar
	printf("\nTesting ft_putchar:\n");
	ft_putstr("\x1B[32m");
	ft_putchar('O');
	ft_putchar('K');	
	printf("\x1B[0m\n\n");

	// Testing ft_putstr
	ft_putstr("Testing ft_putstr: \n\x1B[32mOK\x1B[0m\n");

	// Testing ft_memalloc
	printf("\nTesting ft_memalloc\n");

	size_t sizet = 15;
	char *char_arr = ft_memalloc(size);

	if (sizet == 0)
	{
		if (char_arr != NULL)
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Returns: %p, should return NULL", char_arr);
		}
		else
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}

	}
	else
	{
		for (size_t i = 0; i < sizet; i++)
		{
			if ((char)char_arr[i] != 0)
			{
				printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
				printf("Value in index %zu initialized to %c, should be 0", i, (char)char_arr[i]);
				break ;
			}
			if (i == sizet - 1)
			{
				printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
			}
		}
	}

	// Testing ft_memdel
	printf("\nTesting ft_memdel\n");

	char *tst12 = (char *)malloc(25);
	tst12[0] = 'j';
	tst12[1] = 'e';
	tst12[2] = 'e';

	ft_memdel((void **)&tst12);

	if (tst12 != NULL)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Address is %p, should be NULL\n", tst12);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");		
	}

	// Testing ft_strnew
	printf("\nTesting ft_strnew\n");

	char *tst13 = ft_strnew(15);
	tst13[0] = 'j';
	tst13[1] = 'e';
	tst13[2] = 'e';	

	if (tst13 == NULL)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("NULL pointer returned\n");
	}
	else if (tst13[0] != 'j')
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Couldn't write to string\n");		
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");		
	}

	// Testing ft_strdel
	printf("\nTesting ft_strdel\n");

	char *tst14 = (char *)malloc(25);
	tst14[0] = 'j';
	tst14[1] = 'e';
	tst14[2] = 'e';

	ft_strdel(&tst14);

	if (tst14 != NULL)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Address is %p, should be NULL\n", tst14);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");		
	}

	// Testing ft_strclr
	printf("\nTesting ft_strclr\n");
	char tst15[] = "jeejee";
	ft_strclr(tst15);
	for (int i = 0; i < 7; i++)
	{
		if (tst15[i] != '\0')
		{
			printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
			printf("Char in index %d is '%c', should be '\\0'\n", i, tst15[i]);
			break ;
		}
		if (i == 6)
		{
			printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
		}
	}

	// Testing ft_striter
	printf("\nTesting ft_striter\n");

	char tst16[] = "abcd";
	char tst17[] = "ABCD";

	char *tst18 = NULL;

	void (*f)(char *) = uppercase;

	ft_striter(tst16, f);
	ft_striter(tst18, uppercase);

	if (ft_strcmp(tst16, tst17) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Strings %s and %s don't match\n", tst16, tst17);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_striter
	printf("\nTesting ft_striteri\n");

	char tst19[] = "abcd";
	char tst20[] = "AbCd";

	char *tst21 = NULL;	

	void (*fi)(unsigned int, char *) = uppercase_even;

	ft_striteri(tst19, fi);
	ft_striteri(tst21, uppercase_even);

	if (ft_strcmp(tst19, tst20) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Strings %s and %s don't match\n", tst19, tst20);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_strmap
	printf("\nTesting ft_strmap\n");

	char *tst22 = "abcd";
	char *tst23 = "ABCD";

	char *tst24 = NULL;

	char *tst25 = ft_strmap(tst22, toupper_char);
	char *tst26 = ft_strmap(tst24, toupper_char);

	(void) tst26;


	if (ft_strcmp(tst23, tst25) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Strings %s and %s don't match\n", tst23, tst25);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_strmapi
	printf("\nTesting ft_strmapi\n");

	char *tst27 = "abcd";
	char *tst28 = "AbCd";

	char *tst29 = NULL;

	char *tst30 = ft_strmapi(tst27, toupper_char_even);
	char *tst31 = ft_strmapi(tst29, toupper_char_even);

	(void) tst31;


	if (ft_strcmp(tst28, tst30) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Strings %s and %s don't match\n", tst28, tst30);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_strequ
	printf("\nTesting ft_strequ\n");

	if (ft_strequ("jeejee", "jeejee") != 1)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns %d for matching strings\n", ft_strequ("jeejee", "jeejee"));
	}
	else if (ft_strequ("jeejeejee", "jeejee") != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns %d for non-matching strings\n", ft_strequ("jeejeejee", "jeejee"));		
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_strnequ
	printf("\nTesting ft_strnequ\n");

	if (ft_strnequ("jeejee", "jeejee", 20) != 1)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns %d for matching strings\n", ft_strnequ("jeejee", "jeejee", 20));
	}
	else if (ft_strnequ("jeejeejee", "jeejee", 20) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns %d for non-matching strings\n", ft_strnequ("jeejeejee", "jeejee", 20));		
	}
	else if (ft_strnequ("jeejeejee", "jeejee", 6) != 1)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns %d for non-matching strings when they match up to n chars\n", ft_strnequ("jeejeejee", "jeejee", 6));		
	}	
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_strsub
	printf("\nTesting ft_strsub\n");
	char *sour = "We don't need no education";
	char *sub = "need no";

	if (ft_strcmp(ft_strsub(sour, 9, 7), sub) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Output: %s, should be: %s", ft_strsub(sour, 9, 7), sub);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}

	// Testing ft_strjoin
	printf("\nTesting ft_strjoin\n");
	char strj[60] = "Hello, ";
	char *strj1 = "Hello, ";
	char *strj2 = "world!";
	char *strj4 = ft_strjoin(strj1, strj2);
	ft_strcat(strj, strj2);


	if (ft_strcmp(strj4, strj) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns: %s, should return %s\n", strj4, strj);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}	

	// Testing ft_strtrim
	printf("\nTesting ft_strtrim\n");
	char *strt = "	    jee, jee	      ";
	char *strt1 = "jee, jee";
	char *strt2 = ft_strtrim(strt);

	if (ft_strcmp(strt2, strt1) != 0)
	{
		printf("%sKO%s\n", "\x1B[31m", "\x1B[0m");
		printf("Returns: \"%s\", should return \"%s\"\n", strt2, strt1);
	}
	else
	{
		printf("%sOK%s\n", "\x1B[32m", "\x1B[0m");
	}		

}


////////////////////////////////////////////////////////////////

void uppercase(char *str)
{
	str[0] = ft_toupper(str[0]);
}

void uppercase_even(unsigned int i, char *str)
{
	if (i % 2 == 0)
		str[0] = ft_toupper(str[0]);
}

char	toupper_char(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

char	toupper_char_even(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z' && i % 2 == 0)
		c -= 'a' - 'A';
	return (c);
}
