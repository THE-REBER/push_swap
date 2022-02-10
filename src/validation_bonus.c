/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:18:50 by hmanilow          #+#    #+#             */
/*   Updated: 2022/02/10 18:18:51 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_it_num(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_print_error(NULL);
		i++;
	}
	return (0);
}

int	check_sort(t_list **a)
{
	t_list	*faq;

	faq = *a;
	while (faq && faq->next)
	{
		if (faq->number < faq->next->number)
			faq = faq->next;
		else
			return (0);
	}
	return (1);
}

int	check_dublicate(t_list **a, int y)
{
	t_list	*faq;

	if (*a == NULL)
		return (0);
	faq = *a;
	while (faq)
	{
		if (faq->number == y)
			return (1);
		faq = faq->next;
	}
	return (0);
}

void	valid(int argc, char **argv, t_grenade *s_grenader)
{
	int		n;
	int		i;
	t_list	*new_list;

	i = 1;
	new_list = NULL;
	while (i < argc)
	{
		is_it_num(argv[i]);
		if (ft_atoi(argv[i], &n))
			ft_print_error(NULL);
		if (check_dublicate(&s_grenader->s_a, n))
			ft_print_error(NULL);
		new_list = ft_lstnew(n);
		if (!new_list)
			ft_print_error(NULL);
		ft_lstadd_back(&s_grenader->s_a, new_list);
		s_grenader->length_a++;
		i++;
	}
}
