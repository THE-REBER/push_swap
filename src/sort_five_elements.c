/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_elements.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:26 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:26 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_minimum(t_grenade *s_grenader)
{
	t_list	*faq;
	int		min;

	min = MAX_INT;
	faq = s_grenader->s_a;
	while (faq)
	{
		if (min > faq->number)
			min = faq->number;
		faq = faq->next;
	}
	return (min);
}

void	pushin_min(t_grenade *s_grenader, int argc)
{
	int		min;
	t_list	*faq;

	min = find_minimum(s_grenader);
	faq = s_grenader->s_a;
	if (faq->next->number == min)
		ft_swap(&s_grenader->s_a, "sa");
	else if (faq->next->next->number == min)
	{
		ft_rotate(&s_grenader->s_a, "ra");
		ft_rotate(&s_grenader->s_a, "ra");
	}
	else if (faq->next->next->next->number == min && argc == 6)
	{
		ft_reverse_rotate(&s_grenader->s_a, "rra");
		ft_reverse_rotate(&s_grenader->s_a, "rra");
	}
	else if ((faq->next->next->next->number == min & argc == 5)
		|| (faq->number != min && argc == 6))
		ft_reverse_rotate(&s_grenader->s_a, "rra");
	ft_push(&s_grenader->s_a, &s_grenader->s_b, "pb");
}

void	ft_sort_5(t_grenade *s_grenader, int argc)
{
	int	z;

	z = argc;
	while (argc != 4)
		pushin_min(s_grenader, argc--);
	ft_sort_3(&s_grenader->s_a);
	ft_push(&s_grenader->s_b, &s_grenader->s_a, "pa");
	if (z == 6)
		ft_push(&s_grenader->s_b, &s_grenader->s_a, "pa");
}
