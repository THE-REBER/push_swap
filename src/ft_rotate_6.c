/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_6.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:17:47 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:17:52 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate(t_list **arr, char *str)
{
	t_list	*t;

	if (str)
		ft_putendl_fd(str, 1);
	if (*arr && (*arr)->next)
	{
		ft_lstadd_back(arr, *arr);
		t = *arr;
		*arr = (*arr)->next;
		t->next = NULL;
	}
}

void	ft_reverse_rotate(t_list **arr, char *str)
{
	t_list	*t1;
	t_list	*t2;

	if (str)
		ft_putendl_fd(str, 1);
	if (*arr && (*arr)->next)
	{
		t1 = ft_lstlast(*arr);
		t2 = *arr;
		while ((*arr)->next->next)
			*arr = (*arr)->next;
		(*arr)->next = NULL;
		t1->next = t2;
		*arr = t1;
	}
}

void	rr_ra_rb(t_list **a, t_list **b, char *str)
{
	ft_rotate(a, str);
	ft_rotate(b, NULL);
}

void	rrr_ra_rb(t_list **a, t_list **b, char *str)
{
	ft_reverse_rotate(a, str);
	ft_reverse_rotate(b, NULL);
}
