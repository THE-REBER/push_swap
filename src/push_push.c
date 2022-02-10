/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:19 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:21 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push(t_list **first, t_list **second, char *str)
{
	t_list	*t;

	if (str)
		ft_putendl_fd(str, 1);
	if (*first)
	{
		t = (*first)->next;
		ft_lstadd_front(second, *first);
		*first = t;
	}
}
