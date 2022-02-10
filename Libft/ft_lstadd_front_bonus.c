#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (lst && *lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		new->next = NULL;
		*lst = new;
	}
}
