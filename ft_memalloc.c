

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	ret = (void *)malloc(size);
	if (size == 0 || ret == NULL)
		return (NULL);
	ft_memset(ret, 0, size);
	return (ret);
}
