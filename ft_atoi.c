

#include "libft.h"

int	ft_atoi(char const *str)
{
	unsigned long int	res;
	int					sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (sign == 1 && res > 9223372036854775807)
		return (-1);
	return (int)(sign * res);
}
