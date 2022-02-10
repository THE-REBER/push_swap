#include "libft.h"

t_list	*ft_lstnew(int n)
{
	t_list	*a;

	a = malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	a->number = n;
	a->ind = 0;
	a->next = NULL;
	return (a);
}
