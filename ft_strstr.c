

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int j;
	int k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i + 1;
			k = 1;
			while (1)
			{
				if (needle[k] == '\0')
					return ((char *)&(haystack[i]));
				if (haystack[j] != needle[k])
					break ;
				j++;
				k++;
			}
		}
		i++;
	}
	return (NULL);
}