
#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			if ((s1[i] < 0 || s1[i] > 127) && (s2[i] >= 0 && s2[i] <= 127))
				return (s1[i] - s2[i] + 256);
			else if ((s2[i] < 0 || s2[i] > 127) && (s1[i] >= 0 && s1[i] <= 127))
				return (s1[i] - s2[i] - 256);
			else
				return (s1[i] - s2[i]);
		}
		i++;
	}
		if ((s1[i] < 0 || s1[i] > 127) && (s2[i] >= 0 && s2[i] <= 127))
			return (s1[i] - s2[i] + 256);
		else if ((s2[i] < 0 || s2[i] > 127) && (s1[i] >= 0 && s1[i] <= 127))
			return (s1[i] - s2[i] - 256);
		else
			return (s1[i] - s2[i]);
}
