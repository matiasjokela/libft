

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (nee[0] == '\0')
		return ((char *)hay);
	while (hay[i] != '\0' && i < len)
	{
		if (hay[i] == nee[0])
		{
			j = i + 1;
			k = 1;
			while (1)
			{
				if (nee[k] == '\0')
					return ((char *)&(hay[i]));
				if (j >= len)
					return (NULL);
				if (hay[j++] != nee[k++])
					break ;
			}
		}
		i++;
	}
	return (NULL);
}