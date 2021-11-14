
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char *ret;

	i = 0;
	if (s == NULL)
		return NULL;	
	ret = (char *)malloc(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		ret[i] = f(s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
