/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:54:51 by mjokela           #+#    #+#             */
/*   Updated: 2021/11/08 12:54:55 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *) b;
	while (i < len)
	{
		tmp[i] = (unsigned char) c;
		i++;
	}
	return (b);
}