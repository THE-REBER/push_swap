/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:43 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:43 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_list **boom, char *str)
{
	t_list	*t;

	if (str)
		ft_putendl_fd(str, 1);
	if (*boom && (*boom)->next)
	{
		t = (*boom)->next;
		(*boom)->next = t->next;
		t->next = *boom;
		*boom = t;
	}
}

void	ss(t_list **boom_a, t_list **boom_b, char *str)
{
	ft_swap(boom_a, str);
	ft_swap(boom_b, NULL);
}
