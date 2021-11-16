

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		r;
	char	**arr;
	char	*arr_row;

	i = 0;
	j = 0;
	r = 0;
	arr = (char **)malloc(sizeof(char *) * ft_count_delimited_words(s, c));
	if (arr == NULL || ft_count_delimited_words(s, c) == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			arr_row = (char *)malloc(sizeof(char) * ft_dstrlen(&(s[i]), c) + 1);
			arr[r] = arr_row;
			while (s[i] != c && s[i] != '\0')
			{
				arr[r][j] = s[i];
				i++;
				j++;
			}
			arr[r][j] = '\0';
			r++;
		}
		j = 0;
		i++;
	}
	return (arr);
}
