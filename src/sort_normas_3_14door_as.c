/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_normas_3_14door_as.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:28 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:29 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	assigned_right_ind(t_list *s_s, t_grenade *s_grenader)
{
	size_t	length;
	t_list	*faq;
	size_t	j;

	faq = s_s;
	length = ft_size_of_stack(s_s);
	while (faq)
	{
		j = 0;
		while (j < length)
		{
			if (faq->number == s_grenader->mas[j])
			{
				(*faq).ind = j;
				break ;
			}
			j++;
		}
		faq = faq->next;
	}
}

size_t	max_index(t_list *s_s, t_grenade *s_grenader)
{
	size_t	max;
	t_list	*faq;

	max = 0;
	faq = s_s;
	assigned_right_ind(s_s, s_grenader);
	while (faq)
	{
		if (max < faq->ind)
			max = faq->ind;
		faq = faq->next;
	}
	return (max);
}

static int	find_place_of_max(t_list *s_s, size_t max)
{
	size_t	j;
	t_list	*faq;

	faq = s_s;
	j = 0;
	while (faq->next)
	{
		if (faq->ind == max)
			break ;
		faq = faq->next;
		j++;
	}
	return (j);
}

static void	sorting_stack_b(t_grenade *s_grenader)
{
	size_t	arg;
	size_t	j;
	size_t	max;

	while (s_grenader->s_b)
	{
		arg = (ft_size_of_stack(s_grenader->s_b)) / 2;
		max = max_index(s_grenader->s_b, s_grenader);
		j = find_place_of_max(s_grenader->s_b, max);
		if (s_grenader->s_b->ind == max)
			ft_push(&s_grenader->s_b, &s_grenader->s_a, "pa");
		else if (s_grenader->s_b->ind != max && j > arg)
			ft_reverse_rotate(&s_grenader->s_b, "rrb");
		else if (s_grenader->s_b->ind != max && j <= arg)
			ft_rotate(&s_grenader->s_b, "rb");
	}
}

void	normal_sorting(t_grenade *s_grenader)
{
	size_t	j;

	j = 0;
	assigned_right_ind (s_grenader->s_a, s_grenader);
	while (s_grenader->s_a)
	{
		if (j > 0 && s_grenader->s_a->ind <= j)
		{
			ft_push(&s_grenader->s_a, &s_grenader->s_b, "pb");
			ft_rotate(&s_grenader->s_b, "rb");
			j++;
		}
		else if (s_grenader->s_a->ind >= j)
			ft_rotate(&s_grenader->s_a, "ra");
		else if (s_grenader->s_a->ind <= (j + 23))
		{
			ft_push(&s_grenader->s_a, &s_grenader->s_b, "pb");
			j++;
		}
	}
	sorting_stack_b(s_grenader);
}
