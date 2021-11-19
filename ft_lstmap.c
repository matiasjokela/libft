

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*tmp;

	tmp = f(lst);
	if (tmp == NULL)
		return (NULL);
	fresh = tmp;
	while (lst->next != NULL)
	{
		tmp->next = f(lst->next);
		if (tmp->next ==NULL)
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (fresh);
}
