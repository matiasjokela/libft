

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*stri;
	char	*tmp;

	i = 0;
	j = 0;
	stri = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	tmp = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);	
	if (stri == NULL || tmp == NULL)
		return (NULL);
	while (n % 10 != 0)
	{

	}
	free(tmp);
	return (stri);
}