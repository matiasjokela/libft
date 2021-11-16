

int	ft_count_delimited_words(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wc++;
		i++;
	}
	return	(wc);
}
