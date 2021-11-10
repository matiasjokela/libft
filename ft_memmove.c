/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:11:46 by mjokela           #+#    #+#             */
/*   Updated: 2021/11/10 12:11:49 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char *buf;

	i = 0;
	buf = (unsigned char *)(malloc(len + 1));
	if (buf == NULL)
		return (NULL);
	while (i < len)
	{
		buf[i] = ((char *)src)[i];
		((char *)dst)[i] = buf[i];
		i++;
	}
	free(buf);
	return (dst);
}
