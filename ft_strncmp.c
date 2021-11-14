/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:13:48 by mjokela           #+#    #+#             */
/*   Updated: 2021/11/08 12:14:02 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (i == n)
		return (0);
	else if ((s1[i] < 0 || s1[i] > 127) && (s2[i] >= 0 && s2[i] <= 127))
		return (s1[i] - s2[i] + 256);
	else if ((s2[i] < 0 || s2[i] > 127) && (s1[i] >= 0 && s1[i] <= 127))
		return (s1[i] - s2[i] - 256);
	else
		return (s1[i] - s2[i]);
}
