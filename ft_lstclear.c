#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *now;
	t_list *next;

	now = *lst;
	while (lst)
	{
		next = now->next;
		ft_lstdelone(now, del);
		now = next;
	}
	*lst = 0;
}
