/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three_elements.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:32 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:32 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_3(t_list **a)
{
	while (!((*a)->number < (*a)->next->number && (*a)->next->number < \
		(*a)->next->next->number && (*a)->number < (*a)->next->next->number))
	{
		if ((*a)->number > (*a)->next->number && (*a)->next->number < \
			(*a)->next->next->number && (*a)->number < (*a)->next->next->number)
			ft_swap(a, "sa");
		else if ((*a)->number > (*a)->next->number && (*a)->next->number > \
			(*a)->next->next->number && (*a)->number > (*a)->next->next->number)
		{
			ft_rotate(a, "ra");
			ft_swap(a, "sa");
		}
		else if ((*a)->number < (*a)->next->number && (*a)->next->number > \
			(*a)->next->next->number && (*a)->number > (*a)->next->next->number)
			ft_reverse_rotate(a, "rra");
		else if ((*a)->number > (*a)->next->number && (*a)->next->number < \
			(*a)->next->next->number && (*a)->number > (*a)->next->next->number)
			ft_rotate(a, "ra");
		else if ((*a)->number < (*a)->next->number && (*a)->next->number > \
			(*a)->next->next->number && (*a)->number < (*a)->next->next->number)
		{
			ft_reverse_rotate(a, "rra");
			ft_swap(a, "sa");
		}
	}
}
