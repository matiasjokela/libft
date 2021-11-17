

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*stri;

	i = ft_intlen(n);

	j = 0;
	stri = (char *)malloc(sizeof(char) * i + 1);
	if (stri == NULL)
		return (NULL);
	stri[i--] = '\0';
	if (n < 0)
	{
		stri[0] = '-';
		n *= -1;
	}
	while (n / 10 != 0)
	{
		stri[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	stri[i--] = n % 10 + '0';
	return (stri);
}
