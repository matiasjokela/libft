

int	ft_intlen(int n)
{
	int	len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	while (n % 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
